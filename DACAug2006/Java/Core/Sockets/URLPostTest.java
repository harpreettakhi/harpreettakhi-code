import java.io.*;
import java.net.*;

class URLPostTest{

	public static void main(String[] args) throws Exception{
		System.setProperty("proxyHost", "192.168.1.14");
		System.setProperty("proxyPort", "3128");
		String request = "name=" + URLEncoder.encode(args[0], "UTF-8")
			       + "&job=" + URLEncoder.encode(args[1], "UTF-8")
			       + "&age=" + URLEncoder.encode(args[2], "UTF-8");
		URL url = new URL("http://kmh.vectorstar.net/met/register.php");
		URLConnection con = url.openConnection();
		con.setDoOutput(true);
		OutputStream out = con.getOutputStream();
		out.write(request.getBytes());
		out.close();
		InputStream in = con.getInputStream();
		BufferedReader reader = new BufferedReader(new InputStreamReader(in));
		System.out.println(reader.readLine());
		reader.close();
	
	}
}
