import depository.*;
import java.rmi.*;

class DepositoryServer{

	public static void main(String[] args) throws Exception{
		PortfolioFactoryImpl servant = new PortfolioFactoryImpl();
		Naming.rebind("dep", servant);
		System.out.println("Depository-Server ready...");		
	}
}






