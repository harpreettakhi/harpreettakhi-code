package sales;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class LogoutServlet extends HttpServlet{
	
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException{
		HttpSession session = request.getSession(false);
		if(session != null){
			CustomerBean cb = (CustomerBean) session.getAttribute("model");
			Cookie cookie = new Cookie("CustomerID", cb.getCustomer());
			cookie.setMaxAge(5 * 24 * 60 * 60);
			response.addCookie(cookie);
			session.invalidate();
		}
		response.sendRedirect("/sales/login.jsp");
		//RequestDispatcher rd = request.getRequestDispatcher("/login.jsp");
		//rd.forward(request, response);
	}
}
 








