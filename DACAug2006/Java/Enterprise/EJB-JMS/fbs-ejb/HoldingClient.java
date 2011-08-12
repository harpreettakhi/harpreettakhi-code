import trading.*;
import javax.rmi.*;
import javax.naming.*;
import java.util.*;

class HoldingClient{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		Object ref = naming.lookup("java:comp/env/ejb/HoldingBean");
		HoldingHome home = (HoldingHome) PortableRemoteObject.narrow(ref, HoldingHome.class);
		if(args[0].equals("find")){
			HoldingPK key = new HoldingPK(Integer.parseInt(args[1]), args[2]);
			Holding h = home.findByPrimaryKey(key);
			System.out.println("Number of shares : " + h.getShares());
		}else if(args[0].equals("list")){
			Collection col = home.findByAccountId(Integer.parseInt(args[1]));
			for(Iterator i = col.iterator(); i.hasNext();){
				Holding h = (Holding) i.next();
				System.out.println(h.getCompanyId() + "\t" + h.getShares());
			}
		}
	}
}






