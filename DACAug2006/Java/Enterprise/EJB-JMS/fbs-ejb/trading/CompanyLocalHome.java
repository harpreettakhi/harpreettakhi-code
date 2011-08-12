package trading;

import javax.ejb.*;
import java.util.*;

public interface CompanyLocalHome extends EJBLocalHome{

	CompanyLocal create(String id, double price, int stock) throws CreateException;
	CompanyLocal findByPrimaryKey(String key) throws FinderException;
	Collection findAll() throws FinderException;
	Collection findInPriceRange(double low, double high) throws FinderException;
	double getAveragePrice();
}







