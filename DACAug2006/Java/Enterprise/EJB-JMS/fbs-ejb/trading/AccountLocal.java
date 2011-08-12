package trading;

import javax.ejb.*;

public interface AccountLocal extends EJBLocalObject{

	int getId();
	double getBalance();
	void setBalance(double value);
	double getCredit();
	void setCredit(double value);
}
