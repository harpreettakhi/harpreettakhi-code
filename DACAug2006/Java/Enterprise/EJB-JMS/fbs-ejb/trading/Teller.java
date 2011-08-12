package trading;

import javax.ejb.*;
import java.rmi.*;

public interface Teller extends EJBObject{

	void credit(double amount) throws TradingException, RemoteException;
	void debit(double amount) throws TradingException, RemoteException;
}
