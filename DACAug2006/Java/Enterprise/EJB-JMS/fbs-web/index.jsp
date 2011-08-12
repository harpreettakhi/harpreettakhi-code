<%@ taglib prefix="fbs" uri="/WEB-INF/fbs.tld"%>

<html>
    <head>
        <title>Welcome</title>
    </head>
    <body>
        <h1 align="center">Welcome Broker</h1>
        <table align="center" border="1" cellpadding="1" cellspacing="1">
	  <tr><th>Company ID</th><th>Share Price</th><th>Available Stock</th></tr>
	  <fbs:getCompany id="company">
	    <tr>
		<td><jsp:getProperty name="company" property="id"/></td>
		<td align="right"><jsp:getProperty name="company" property="price"/></td>
		<td align="right"><jsp:getProperty name="company" property="stock"/></td>
	    </tr>
	  </fbs:getCompany>
	</table>
	<p align="center">
	  <a href="transfer.jsp">Transfer Shares</a>
	</p>
    </body>
</html>








