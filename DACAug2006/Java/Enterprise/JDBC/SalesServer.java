import sales.*;
import java.rmi.*;

class SalesServer{
	public static void main(String[] args) throws Exception{
		OrderManagerImpl servant = new OrderManagerImpl();
		Naming.rebind("sales", servant);
	}
	
}
