package trading;

import javax.ejb.*;
import java.rmi.*;
import java.util.*;

public interface CompanyHome extends EJBHome{

	Company create(String id, double price, int stock) throws CreateException, RemoteException;
	Company findByPrimaryKey(String key) throws FinderException, RemoteException;
	Collection findAll() throws FinderException, RemoteException;
	Collection findInPriceRange(double low, double high) throws FinderException, RemoteException;
	double getAveragePrice() throws RemoteException;
}







