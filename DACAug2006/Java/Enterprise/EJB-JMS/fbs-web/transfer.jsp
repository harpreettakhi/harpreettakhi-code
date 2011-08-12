<%@ taglib prefix="fbs" uri="/WEB-INF/fbs.tld"%>
<jsp:useBean id="trader" class="wwwtrade.TraderBean"/>
<jsp:setProperty name="trader" property="*"/>

<html>
    <head>
        <title>Transfer</title>
    </head>
    <body>
        <h1 align="center">Welcome Broker</h1>
        <form method="post">
         <table align="center" border="0" bgcolor="#C9C9C9">
	  <tr><td><b>Source Account : </b></td><td><input type="text" name="sourceAccountId"></td></tr>
	  <tr><td><b>Target Account : </b></td><td><input type="text" name="targetAccountId"></td></tr>
	  <tr>
	    <td><b>Company Id : </b></td>
	    <td>
		<select name="companyId">
		    <fbs:getCompany id="company">
			<option><jsp:getProperty name="company" property="id"/></option>
		    </fbs:getCompany>
		</select>
	    </td>	
	  </tr>
	  <tr><td><b>Shares : </b></td><td><input type="text" name="shares"></td></tr>
	  <tr align="center"><td colspan="2"><input type="submit" name="submit" value="Transfer"></td></tr>
	 </table>
        </form>
	<p align="center">
	  <%
		if(request.getParameter("submit") != null){
			try{
				trader.transfer();
				out.println("<b>Transfer Successful!</b>");
			}catch(Exception e){
				out.println("<b>Transfer Failed : </b>" + e.getMessage());
			}
		}
	  %>    
	</p>
	<p align="center">
	  <a href="index.jsp">Home Page</a>
	</p>
    </body>
</html>








