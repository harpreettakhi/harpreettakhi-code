import java.io.*;
import java.net.*;

class TCPClientTest{

	public static void main(String[] args) throws Exception{		
		Socket soc = new Socket(args[1], 2055);
		InputStream in = soc.getInputStream();
		OutputStream out = soc.getOutputStream();
		BufferedReader reader = new BufferedReader(
				new InputStreamReader(in));
		PrintWriter writer = new PrintWriter(
				new OutputStreamWriter(out));
		System.out.println(reader.readLine());
		writer.println(args[0]);
		writer.flush();
		System.out.println(reader.readLine());
		writer.close();
		reader.close();
		soc.close();
	}
}













