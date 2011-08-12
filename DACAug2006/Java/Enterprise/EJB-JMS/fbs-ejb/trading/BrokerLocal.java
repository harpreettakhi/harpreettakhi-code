package trading;

import javax.ejb.*;

public interface BrokerLocal extends EJBLocalObject{

	void buy(int accid, String compid, int quantity) throws TradingException, FinderException;
	void sell(int accid, String compid, int quantity) throws TradingException, FinderException;
}
