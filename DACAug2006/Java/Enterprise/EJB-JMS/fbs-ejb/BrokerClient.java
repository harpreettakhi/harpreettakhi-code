import trading.*;
import javax.rmi.*;
import javax.naming.*;

class BrokerClient{

	public static void main(String[] args) throws Exception{
		int accid = Integer.parseInt(args[1]);
		String compid = args[2];
		int qty = Integer.parseInt(args[3]);
		Context naming = new InitialContext();
		Object ref = naming.lookup("java:comp/env/ejb/BrokerBean");
		BrokerHome home = (BrokerHome) PortableRemoteObject.narrow(ref, BrokerHome.class);
		Broker broker = home.create();
		if(args[0].equals("buy"))
			broker.buy(accid, compid, qty);
		else if(args[0].equals("sell"))
			broker.sell(accid, compid, qty);
		else
			System.out.println("Bad command");
	}
}








