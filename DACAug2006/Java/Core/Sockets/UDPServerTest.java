import java.net.*;
import java.util.*;

class UDPServerTest{

	private static String[] symbols = {"DELL", "IBM", "MSFT", "ORCL", "SUNW"};

	public static void main(String[] args) throws Exception{
		DatagramSocket soc = new DatagramSocket(2055);
		System.out.println("Stock-Server ready, servicing on port 2055...");
		while(true){
			DatagramPacket dp = new DatagramPacket(new byte[80], 80);
			soc.receive(dp);
			String request = new String(dp.getData(), 0, dp.getLength());
			String response;
			if(Arrays.binarySearch(symbols, request) < 0)
				response = "Price not available";
			else
				response = "Price is " + (90 * Math.random() + 10);
			dp.setData(response.getBytes());
			dp.setLength(response.length());
			soc.send(dp);
		}
	}
}












