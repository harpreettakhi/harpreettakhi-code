import java.io.*;
import java.util.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class WelcomeServlet extends HttpServlet{
	
	private String greet;

	public void init(ServletConfig cfg) throws ServletException{
		
		super.init(cfg);
		//one-time initialization
		greet = cfg.getInitParameter("greet");
		if(greet == null) greet = "Welcome";
	}
	
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException{
		String name = request.getParameter("name");
		if(name == null) name = "Visitor";
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<html>");
		out.println("<head><title>Welcome</title></head>");
		out.println("<body>");
		out.println("<h1 align='center'>" + greet + " " + name +"</h1>");	
		out.println("<b>Current Server Time : </b>" + new Date());
		out.println("</body>");
		out.println("</html>");
		out.close();
	}
}















