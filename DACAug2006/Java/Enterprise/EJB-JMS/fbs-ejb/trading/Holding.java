package trading;

import javax.ejb.*;
import java.rmi.*;

public interface Holding extends EJBObject{

	int getAccountId() throws RemoteException;
	String getCompanyId() throws RemoteException;	
	int getShares() throws RemoteException;
	void setShares(int value) throws RemoteException;
}
