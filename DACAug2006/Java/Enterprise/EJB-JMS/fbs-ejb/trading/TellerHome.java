package trading;

import javax.ejb.*;
import java.rmi.*;

public interface TellerHome extends EJBHome{

	Teller create(int accid) throws CreateException, RemoteException;
}
