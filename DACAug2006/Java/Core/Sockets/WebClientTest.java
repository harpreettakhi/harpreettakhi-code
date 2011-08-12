import java.io.*;
import java.net.*;

class WebClientTest{

	public static void main(String[] args) throws Exception{
		URL u = new URL("http://labasst3/stock.aspx?symbol=" + args[0]);
		InputStream in = u.openStream();
		BufferedReader reader = new BufferedReader(
			new InputStreamReader(in));
		System.out.println(reader.readLine());
		reader.close();
	}
}








