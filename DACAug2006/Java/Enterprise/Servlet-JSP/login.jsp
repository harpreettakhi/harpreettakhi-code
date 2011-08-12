<%
	String custId = "";
	Cookie[] cookies = request.getCookies();
	int n = 0;
	if(cookies != null) n = cookies.length;
	for(int i = 0; i < n; i++){
		if(cookies[i].getName().equals("CustomerID")){
			custId = cookies[i].getValue();
			break;
		}
	}
%>
<html>
  <head><title>Login</title></head>
  <body>
     <h1 align="center">Welcome Customer</h1>
     <form action="/sales/servlet/login" method="post">
	<table align="center" border="0" bgcolor="#C9C9C9">
		<tr><td>Customer ID : </td><td><input type="text" name="custid" value="<%=custId%>"></td></tr> 
		<tr><td>Password : </td><td><input type="password" name="pwd"></td></tr>
		<tr align="center"><td colspan="2"><input type="submit" name="submit" value="Login"></td></tr>
	</table>
     </form>
     <p align="center">
	<%
		if(request.getParameter("status") != null)
			out.println("<b>Authorization Failed! </b>");
	%>
     </p>
  </body>
</html>






