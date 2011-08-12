import java.net.*;
import java.io.*;

class URLPost{
	public static void main(String[] args) throws IOException{
		System.setProperty("proxyHost", "192.168.1.14");
		System.setProperty("proxyPort", "3128");
		String data="name=" + URLEncoder.encode(args[0], "UTF-8")
			   +"&job=" + URLEncoder.encode(args[1], "UTF-8")
			   +"&age="+ URLEncoder.encode(args[2], "UTF-8");
		URL u=new URL("http://kmh.vectorstar.net/met/register.php");
		URLConnection cn=u.openConnection();
		cn.setDoOutput(true);
		OutputStream out=cn.getOutputStream();
		out.write(data.getBytes());
		out.close();
		InputStream in=cn.getInputStream();
		BufferedReader br=new BufferedReader(new InputStreamReader(in));
		String text;
		while((text = br.readLine()) != null)
			if(text.length() != 0) System.out.println(text);
		br.close();
	}
}