import java.rmi.*;

public class PriceManagerImpl extends javax.rmi.PortableRemoteObject implements PriceManager{
	
	private PriceComponent component;
	
	public PriceManagerImpl() throws RemoteException{
		super();  // exportObject(this);
		component = new	PriceComponent();
	}

	public double getUnitPrice(int product){
		System.out.println("Invoking getUnitPrice with " + product);
		return component.getUnitPrice(product);
	}

	public float getBulkDiscount(int quantity){
		float result = component.getBulkDiscount(quantity);
		System.out.println("Invoked getBulkDiscount with " + quantity);
		return result;
	}

}
