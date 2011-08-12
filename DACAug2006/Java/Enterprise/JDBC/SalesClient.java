import sales.*;
import java.rmi.*;

class SalesClient{
	public static void main(String[] args){
		String customer = args[0];
		int product = Integer.parseInt(args[1]);
		int quantity = Integer.parseInt(args[2]);
		try{
			OrderManager om = (OrderManager) Naming.lookup("rmi://localhost/sales");
			int ordno = om.placeOrder(customer, product, quantity);
			System.out.println("Order Number : " + ordno);
		}catch(Exception e){
			System.out.println("Order Failed : " + e.getMessage());
		}

	}
}















