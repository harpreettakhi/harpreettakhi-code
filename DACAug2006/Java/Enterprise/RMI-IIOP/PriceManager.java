import java.rmi.*;

public interface PriceManager extends Remote{
	
	double getUnitPrice(int product) throws RemoteException;
	float getBulkDiscount(int quantity) throws RemoteException;
}
