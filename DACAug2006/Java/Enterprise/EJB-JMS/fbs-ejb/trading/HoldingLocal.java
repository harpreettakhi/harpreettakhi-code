package trading;

import javax.ejb.*;

public interface HoldingLocal extends EJBLocalObject{

	int getAccountId();
	String getCompanyId();	
	int getShares();
	void setShares(int value);
}
