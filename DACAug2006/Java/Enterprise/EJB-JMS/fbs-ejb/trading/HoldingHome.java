package trading;

import javax.ejb.*;
import java.rmi.*;
import java.util.*;

public interface HoldingHome extends EJBHome{

	Holding create(int accid, String compid, int shares) throws CreateException, RemoteException;
	Holding findByPrimaryKey(HoldingPK key) throws FinderException, RemoteException;
	Collection findByAccountId(int accid) throws FinderException, RemoteException;
}







