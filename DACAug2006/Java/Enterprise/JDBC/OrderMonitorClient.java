import sales.*;
import java.rmi.*;

public class OrderMonitorClient extends java.rmi.server.UnicastRemoteObject implements OrderMonitor{

	public OrderMonitorClient() throws RemoteException{
	}

	public void orderPlaced(int orderNo){
		System.out.println(orderNo + " placed");
	}

	public static void main(String[] args) throws Exception{
		OrderManager remote = (OrderManager) Naming.lookup("rmi://prithvi/sales");
		OrderMonitorClient client = new OrderMonitorClient();
		remote.setOrderMonitor(client);
		System.out.println("Enter any key to abort...");
		System.in.read();
		remote.setOrderMonitor(null);
		System.exit(0);
	}
}










