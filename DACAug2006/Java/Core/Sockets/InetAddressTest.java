import java.net.*;

class InetAddressTest{
	
	public static void main(String[] args){
		try{
			InetAddress addr;
			if(args.length > 0)
				addr = InetAddress.getByName(args[0]);
			else
				addr = InetAddress.getLocalHost();
			System.out.println(addr);
		}catch(Exception e){
			System.out.println(e);
		}
	}
}





