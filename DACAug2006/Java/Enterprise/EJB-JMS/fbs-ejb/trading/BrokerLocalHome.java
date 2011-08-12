package trading;

import javax.ejb.*;

public interface BrokerLocalHome extends EJBLocalHome{

	BrokerLocal create() throws CreateException;
}
