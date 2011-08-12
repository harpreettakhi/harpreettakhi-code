package trading;

import javax.ejb.*;
import java.rmi.*;

public interface BrokerHome extends EJBHome{

	Broker create() throws CreateException, RemoteException;
}
