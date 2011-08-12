import javax.rmi.*;
import javax.naming.*;

class PriceClient{
	
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		Object ref = naming.lookup("shop");
		PriceManager remote = (PriceManager) PortableRemoteObject.narrow(ref, PriceManager.class);
		System.out.println("Unit Price : " + remote.getUnitPrice(Integer.parseInt(args[0])));
		System.out.println("Bulk Discount : " + remote.getBulkDiscount(Integer.parseInt(args[1])));
	}
}
