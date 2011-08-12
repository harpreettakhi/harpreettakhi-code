import java.io.*;
import java.util.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class HtmxServlet extends HttpServlet{
		
	
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException{
		String spath = request.getServletPath();
		String rpath = getServletContext().getRealPath(spath);
		Date time = new Date();
		try{
			BufferedReader in = new BufferedReader(
					new InputStreamReader(
					new FileInputStream(rpath)));
			response.setContentType("text/html");
			PrintWriter out = response.getWriter();
			String text;
			while((text = in.readLine()) != null){
				text = text.replaceAll("<now>", time.toString());
				out.println(text);
			}
			out.close();
			in.close();
		}catch(FileNotFoundException e){
			response.sendError(404, spath);
		}
	}
}















