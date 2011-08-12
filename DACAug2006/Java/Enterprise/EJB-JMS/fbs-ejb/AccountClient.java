import trading.*;
import javax.rmi.*;
import javax.naming.*;
import java.util.*;

class AccountClient{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		Object ref = naming.lookup("Account");
		AccountHome home = (AccountHome) PortableRemoteObject.narrow(ref, AccountHome.class);
java.text.DecimalFormat df = new java.text.DecimalFormat("0.00");
		if(args[0].equals("create")){
			Account acc = home.create();
			System.out.println("Account ID : " + acc.getId());
		}else if(args[0].equals("find")){
			Account acc = home.findByPrimaryKey(new Integer(args[1]));
			System.out.println("Account Balance : " + acc.getBalance());
		}else if(args[0].equals("list")){			
			Collection col = home.findAll();
			for(Iterator i = col.iterator(); i.hasNext();){
				Account acc = (Account) i.next();
				System.out.println(acc.getId() + "\t" + df.format(acc.getBalance()) + "\t" + df.format(acc.getCredit()));
			}
		}else if(args[0].equals("total")){
			System.out.println("Total Balance : " + df.format(home.getTotalBalance()));
		}
	}
}






