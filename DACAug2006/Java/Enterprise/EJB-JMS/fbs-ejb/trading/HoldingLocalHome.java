package trading;

import javax.ejb.*;
import java.util.*;

public interface HoldingLocalHome extends EJBLocalHome{

	HoldingLocal create(int accid, String compid, int shares) throws CreateException;
	HoldingLocal findByPrimaryKey(HoldingPK key) throws FinderException;
	Collection findByAccountId(int accid) throws FinderException;
}







