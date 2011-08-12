import java.net.*;

class UDPSubscriberTest{

	public static void main(String[] args) throws Exception{
		InetAddress addr = InetAddress.getByName("230.0.0.1");
		MulticastSocket soc = new MulticastSocket(2056);
		soc.joinGroup(addr);
		DatagramPacket dp = new DatagramPacket(new byte[80], 80);
		for(int i = 0; i < 5; i++){
			soc.receive(dp);
			String msg = new String(dp.getData(), 0, dp.getLength());
			System.out.println(msg);			
		}
		soc.leaveGroup(addr);
		soc.close();
	}
}









