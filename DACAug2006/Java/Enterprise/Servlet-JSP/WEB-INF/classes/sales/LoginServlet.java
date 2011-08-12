package sales;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class LoginServlet extends HttpServlet{
	
	public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException{
		HttpSession session = request.getSession(true);
		String custid = request.getParameter("custid");
		String pwd = request.getParameter("pwd");
		try{
			CustomerBean cb = new CustomerBean();
			cb.authorize(custid, pwd);
			if(cb.isAuthorized()){
				session.setAttribute("model", cb);
				response.sendRedirect("/sales/order.jsp");
			}else{
				response.sendRedirect("/sales/login.jsp?status=failed");
			}
		}catch(Exception e){
			response.sendError(500, e.toString());
		}
	}
}
 








