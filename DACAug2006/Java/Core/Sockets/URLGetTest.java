import java.io.*;
import java.net.*;

class URLGetTest{

	public static void main(String[] args) throws Exception{
		String host = (args.length > 0) ? args[0] : "localhost";
		BufferedReader console = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Request : ");
		String symbol = console.readLine();
		URL url = new URL("http://" + host + ":8055/" + symbol);
		InputStream in = url.openStream();
		BufferedReader reader = new BufferedReader(new InputStreamReader(in));
		System.out.println("Response : " + reader.readLine());
		reader.close();
	}
}
