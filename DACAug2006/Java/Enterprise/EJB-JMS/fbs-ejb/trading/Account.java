package trading;

import javax.ejb.*;
import java.rmi.*;

public interface Account extends EJBObject{

	int getId() throws RemoteException;
	double getBalance() throws RemoteException;
	void setBalance(double value) throws RemoteException;
	double getCredit() throws RemoteException;
	void setCredit(double value) throws RemoteException;
}
