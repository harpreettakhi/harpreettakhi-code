import java.io.*;
import java.util.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class StateServlet extends HttpServlet{
	
	private String greet;

	public void init(ServletConfig cfg) throws ServletException{
		
		super.init(cfg);
		//one-time initialization
		greet = cfg.getInitParameter("greet");
		if(greet == null) greet = "Welcome";
	}
	
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException{
		int m, n;
		ServletContext app = super.getServletContext();
		synchronized(app){
			Integer mm = (Integer) app.getAttribute("request.count");
			m = (mm == null) ? 1 : mm.intValue() + 1;
			app.setAttribute("request.count", new Integer(m));
		}
		HttpSession session = request.getSession(true);
		Integer nn = (Integer) session.getAttribute("request.count");
		n = (nn == null) ? 1 : nn.intValue() + 1;
		session.setAttribute("request.count", new Integer(n));
		String name = request.getParameter("name");
		if(name == null) name = "Visitor";
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<html>");
		out.println("<head><title>Welcome</title></head>");
		out.println("<body>");
		out.println("<h1 align='center'>" + greet + " " + name +"</h1>");	
		out.println("<b>Number of requests : </b>" + n + " / " + m);
		out.println("</body>");
		out.println("</html>");
		out.close();
	}
}















