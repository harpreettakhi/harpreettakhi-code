package sales;

import java.sql.*;
import javax.servlet.jsp.*;
import javax.servlet.jsp.tagext.*;

public class SelectProductTag extends TagSupport{
	
	private int product = 0;
	
	public void setSelected(String value){
		product = Integer.parseInt(value);
	}

	public int doEndTag() throws JspException{
		try{
			Connection con = CustomerBean.connect();
			try{
				Statement stmt = con.createStatement();
				ResultSet rs = stmt.executeQuery("select pno from products");
				JspWriter out = pageContext.getOut();
				out.println("<select name='" + id + "'>");
				while(rs.next()){
					int pno = rs.getInt(1);
					if(pno == product)
						out.println("<option selected>" + pno + "</option>");
					else
						out.println("<option>" + pno + "</option>");
				}
				rs.close();
				stmt.close();
				out.println("</select>");

			}finally{
				con.close();
			}
		}catch(Exception e){
			throw new JspException(e.toString());
		}
		return EVAL_PAGE;
	}	
}





