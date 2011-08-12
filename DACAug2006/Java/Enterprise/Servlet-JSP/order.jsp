<%@ taglib prefix="sales" uri="/WEB-INF/sales.tld"%>
<%@ include file="mail.jsp"%>
<jsp:useBean id="model" class="sales.CustomerBean" scope="session"/>
<jsp:setProperty name="model" property="*"/>
<%
	if(!model.isAuthorized()) response.sendRedirect("/sales/login.jsp");
%>
<html>
  <head>
	<title>Order</title>
	<script>
		function validate(frm){
			var rx = new RegExp("^[1-9][0-9]*$");
			if(rx.test(frm.quantity.value)) return true;
			alert("Please enter a proper value for Quantity");
			return false;
		}
	</script>
  </head>
  <body>
     <h1 align="center">Welcome Customer <jsp:getProperty name="model" property="customer"/></h1>
     <form  method="post" onsubmit="return validate(this)">
	<table align="center" border="0" bgcolor="#C9C9C9">
		<tr>
			<td>Product No : </td>
			<td>
				<sales:selectProduct id="product" selected="<%=model.getProduct()%>"/>
			</td>
		</tr> 
		<tr><td>Quantity : </td><td><input type="text" name="quantity" value="<%=model.getQuantity()%>"></td></tr>
		<tr align="center"><td colspan="2"><input type="submit" name="submit" value="Order"></td></tr>
	</table>
     </form>
     <p align="center">
	<%
		if(request.getParameter("submit") != null){
			String input = request.getParameter("quantity");
			if(input.matches("^[1-9][0-9]*$")){
				int ordno = model.placeOrder();
				out.println("<b>Order Number : </b>" + ordno);
				sendMail("sales@prithvi.sangam.met", "efaculty1@prithvi.sangam.met", "Order Placed", "Order Number : " + ordno);
				
			}else
				out.println("Please enter a proper value for Quantity");
		}
	%>
     </p>
     <p align="center">
	<a href="/sales/view.jsp">View Orders</a>
     </p>
  </body>
</html>






