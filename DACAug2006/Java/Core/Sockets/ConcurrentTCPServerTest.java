import java.io.*;
import java.net.*;
import java.util.*;

class ConcurrentTCPServerTest{

	private static String[] symbols = {"DELL", "IBM", "MSFT", "ORCL", "SUNW"};

	public static void main(String[] args) throws Exception{
		final ServerSocket listener = new ServerSocket(2055);
		System.out.println("Stock-Server mounted, listening on port 2055...");
		Runnable r = new Runnable(){
			public void run(){
				try{
					service(listener);
				}catch(IOException e){}				
			}
		};
		for(int i = 0; i < 5; i++){
			Thread t = new Thread(r);
			t.start();
		}			
	}

	private static void service(ServerSocket listener) throws IOException{
		while(true){
			Socket soc = listener.accept();
			soc.setSoTimeout(180000);
			InputStream in = soc.getInputStream();
			OutputStream out = soc.getOutputStream();
			try{
				communicate(in, out);
			}catch(Exception e){
				System.out.println(e);
			}
			out.close();
			in.close();
			soc.close();
		}
	}

	private static void communicate(InputStream in, OutputStream out) throws IOException{
		BufferedReader reader = new BufferedReader(
				new InputStreamReader(in));
		PrintWriter writer = new PrintWriter(
				new OutputStreamWriter(out), true);
		writer.println("Welcome to Stock-Server");
		String symbol = reader.readLine();
		if(Arrays.binarySearch(symbols, symbol) < 0)
			writer.println("Price not available");
		else
			writer.println("Price is " + (90 * Math.random() + 10));
		writer.close();
		reader.close();
	}
}














