package trading;

import javax.ejb.*;
import java.rmi.*;

public interface Broker extends EJBObject{

	void buy(int accid, String compid, int quantity) throws TradingException, FinderException, RemoteException;
	void sell(int accid, String compid, int quantity) throws TradingException, FinderException, RemoteException;
}
