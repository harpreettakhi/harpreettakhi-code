package sales;

import java.sql.*;
import javax.servlet.jsp.*;
import javax.servlet.jsp.tagext.*;

public class RunQueryTag extends BodyTagSupport{
	
	private String sql;

	public int doAfterBody() throws JspException{
		BodyContent body = getBodyContent();
		sql = body.getString();
		body.clearBody();
		return SKIP_BODY;
	}

	public int doEndTag() throws JspException{
		try{
			Connection con = CustomerBean.connect();
			try{
				Statement stmt = con.createStatement();
				ResultSet rs = stmt.executeQuery(sql);
				ResultSetMetaData rsmd = rs.getMetaData();
				int n = rsmd.getColumnCount();
				JspWriter out = pageContext.getOut();
				out.println("<table align='center' border='1'>");
				out.println("<tr>");
				for(int i = 1; i <= n; i++)
					out.println("<th>" + rsmd.getColumnName(i) + "</th>");
				out.println("</tr>");
				while(rs.next()){
					out.println("<tr>");
					for(int i = 1; i <= n; i++)
						out.println("<td>" + rs.getObject(i) + "</td>");
					out.println("</tr>");
				}
				out.println("</table>");
				rs.close();
				stmt.close();
			}finally{
				con.close();
			}
		}catch(Exception e){
			throw new JspException(e.toString());
		}
		return EVAL_PAGE;
	}	
}





