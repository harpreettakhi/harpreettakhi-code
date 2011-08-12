package trading;

import javax.ejb.*;

public interface CompanyLocal extends EJBLocalObject{

	String getId();
	double getPrice();
	void setPrice(double value);
	int getStock();
	void setStock(int value);
}
