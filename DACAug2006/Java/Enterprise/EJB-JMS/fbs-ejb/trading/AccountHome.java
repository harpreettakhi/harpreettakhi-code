package trading;

import javax.ejb.*;
import java.rmi.*;
import java.util.*;

public interface AccountHome extends EJBHome{

	Account create() throws CreateException, RemoteException;
	Account findByPrimaryKey(Integer key) throws FinderException, RemoteException;
	Collection findAll() throws FinderException, RemoteException;
	double getTotalBalance() throws RemoteException;
}


