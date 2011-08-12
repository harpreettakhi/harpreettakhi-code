import java.net.*;

class UDPPublisherTest{

	private static String[] symbols = {"DELL", "IBM", "MSFT", "ORCL", "SUNW"};

	public static void main(String[] args) throws Exception{		
		InetAddress addr = InetAddress.getByName("230.0.0.1");
		DatagramSocket soc = new DatagramSocket();
		while(true){
			int i = (int) (symbols.length * Math.random());
			double price = 90 * Math.random() + 10;
			String msg = symbols[i] + " : " + price;
			DatagramPacket dp = new DatagramPacket(msg.getBytes(), msg.length(), addr, 2056);
			soc.send(dp);
			Thread.sleep(10000);
		}
	}
}








