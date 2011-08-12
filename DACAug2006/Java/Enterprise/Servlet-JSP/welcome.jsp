<%@ page import="java.util.*"%>

<%-- My First Java Server Page --%>

<%!
	String reverse(String text){
		StringBuffer buf = new StringBuffer();
		buf.append(text);
		buf.reverse(); //reverse buffer content
		return buf.toString();
	}
%>

<%
	String name = request.getParameter("name");
	if(name == null) name = "Visitor";
%>
<html>
	<!-- HTML Section -->
	<head>
		<title>Welcome</title>
	</head>
	<body>
		<h1 align="center">Welcome <%=reverse(name)%></h1>
		<b>Current Server Time : </b> <%=new Date()%>
	</body>
</html>








