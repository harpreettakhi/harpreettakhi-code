package sales;

import java.rmi.*;
import java.sql.*;

public interface OrderManager extends Remote{
	int placeOrder(String customer, int product, int quantity) throws SQLException, RemoteException;
	void setOrderMonitor(OrderMonitor om) throws RemoteException;
}
