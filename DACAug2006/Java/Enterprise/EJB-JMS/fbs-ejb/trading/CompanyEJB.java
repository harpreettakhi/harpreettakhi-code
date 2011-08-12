package trading;

import javax.ejb.*;
import java.util.*;

public abstract class CompanyEJB implements EntityBean{

	private EntityContext context;
	
	public abstract String getId();
	public abstract void setId(String value);	
	public abstract double getPrice();
	public abstract void setPrice(double value);
	public abstract int getStock();
	public abstract void setStock(int value);

	public CompanyInfo getInfo(){
		CompanyInfo info = new CompanyInfo();
		info.id = getId();
		info.price = getPrice();
		info.stock = getStock();
		return info;
	}

	public String ejbCreate(String id, double price, int stock) throws CreateException{
		if(id.length() < 3) throw new CreateException("Invalid Company ID : " + id);
		setId(id);
		setPrice(price);
		setStock(stock);
		return null;
	}

	public void ejbPostCreate(String id, double price, int stock){}
	
	public abstract Collection ejbSelectPrice() throws FinderException;

	public double ejbHomeGetAveragePrice(){
		try{
			Collection col = ejbSelectPrice();
			int n = col.size();
			if(n == 0) return 0;
			double total = 0;
			for(Iterator i = col.iterator(); i.hasNext();){
				Double d = (Double) i.next();
				total += d.doubleValue(); 
			}
			return total / n;
		}catch(FinderException e){
			throw new EJBException(e);
		}
	}
	
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









