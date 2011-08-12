<%@ taglib prefix="sales" uri="/WEB-INF/sales.tld"%>
<jsp:useBean id="model" class="sales.CustomerBean" scope="session"/>

<%
	if(!model.isAuthorized()) response.sendRedirect("/sales/login.jsp");
	response.setHeader("Cache-Control", "no-cache,no-store");
%>
<html>
  <head>
	<title>View</title>
  </head>
  <body>
     <h1 align="center">Welcome Customer <jsp:getProperty name="model" property="customer"/></h1>
     <sales:runQuery>select ord_no, ord_date, pno, qty, amt from ord_view where cust_id='<%=model.getCustomer()%>'</sales:runQuery>
     <p align="center">
	<a href="/sales/servlet/logout">Logout</a>
     </p>
  </body>
</html>






