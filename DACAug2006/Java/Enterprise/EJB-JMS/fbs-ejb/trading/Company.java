package trading;

import javax.ejb.*;
import java.rmi.*;

public interface Company extends EJBObject{

	String getId() throws RemoteException;
	double getPrice() throws RemoteException;
	void setPrice(double value) throws RemoteException;
	int getStock() throws RemoteException;
	void setStock(int value) throws RemoteException;
	CompanyInfo getInfo() throws RemoteException;
}
