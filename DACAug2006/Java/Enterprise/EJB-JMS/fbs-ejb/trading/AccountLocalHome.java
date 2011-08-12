package trading;

import javax.ejb.*;
import java.util.*;

public interface AccountLocalHome extends EJBLocalHome{

	AccountLocal create() throws CreateException;
	AccountLocal findByPrimaryKey(Integer key) throws FinderException;
	Collection findAll() throws FinderException;
	double getTotalBalance();
}


