package sales;

import java.rmi.*;

public interface OrderMonitor extends Remote{

	void orderPlaced(int orderNo) throws RemoteException;
}
