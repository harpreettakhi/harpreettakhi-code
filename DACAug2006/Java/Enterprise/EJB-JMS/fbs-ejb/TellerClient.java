import trading.*;
import javax.rmi.*;
import javax.naming.*;

class TellerClient{

	public static void main(String[] args) throws Exception{
		int accid = Integer.parseInt(args[1]);
		double amt = Double.parseDouble(args[2]);
		Context naming = new InitialContext();
		Object ref = naming.lookup("java:comp/env/ejb/TellerBean");
		TellerHome home = (TellerHome) PortableRemoteObject.narrow(ref, TellerHome.class);
		Teller teller = home.create(accid);
		try{
			if(args[0].equals("credit"))
				teller.credit(amt);
			else if(args[0].equals("debit"))
				teller.debit(amt);
			else
				System.out.println("Bad command");
		}finally{
			teller.remove();
		}
	}
}








