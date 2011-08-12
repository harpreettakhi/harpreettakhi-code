import depository.*;
import java.rmi.*;

class DepositoryClient{

	public static void main(String[] args) throws Exception{
		try{
			PortfolioFactory factory = (PortfolioFactory) Naming.lookup("rmi://prithvi/dep");
			Portfolio pf = factory.open(args[1]);
			if(args[0].equals("-stock"))
				System.out.println("Number of shares : " + pf.getStock(args[2]));
			else if(args[0].equals("-buy"))
				pf.buy(args[2], Integer.parseInt(args[3]));
			else if(args[0].equals("-sell"))
				pf.sell(args[2], Integer.parseInt(args[3]));
			else
				System.out.println("Invalid command");
		}catch(Exception e){
			System.out.println(e);
		}
	}
}







