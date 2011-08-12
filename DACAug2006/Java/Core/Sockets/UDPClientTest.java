import java.net.*;

class UDPClientTest{

	public static void main(String[] args) throws Exception{
		DatagramSocket soc = new DatagramSocket();
		soc.setSoTimeout(5000);
		InetAddress addr = InetAddress.getByName(args[1]);
		DatagramPacket dp = new DatagramPacket(args[0].getBytes(), args[0].length(), addr, 2055);
		soc.send(dp);
		dp = new DatagramPacket(new byte[80], 80);
		soc.receive(dp);
		String response = new String(dp.getData(), 0, dp.getLength());
		System.out.println(response);
		soc.close();
	}
}











