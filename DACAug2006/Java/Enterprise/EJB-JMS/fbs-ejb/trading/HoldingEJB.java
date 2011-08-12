package trading;

import javax.ejb.*;
import java.util.*;

public abstract class HoldingEJB implements EntityBean{

	private EntityContext context;
	
	public abstract int getAccountId();
	public abstract void setAccountId(int value);
	public abstract String getCompanyId();
	public abstract void setCompanyId(String value);
	public abstract int getShares();
	public abstract void setShares(int value);

	public HoldingPK ejbCreate(int accid, String compid, int shares){
		setAccountId(accid);
		setCompanyId(compid);
		setShares(shares);
		return null;
	}

	public void ejbPostCreate(int accid, String compid, int shares){}
	
	public void ejbLoad(){}
	public void ejbStore(){}
	public void ejbRemove() throws RemoveException{}
	public void setEntityContext(EntityContext ctx){
		context = ctx;
	}
	public void unsetEntityContext(){
		context = null;
	}
	public void ejbActivate(){}
	public void ejbPassivate(){}
}









