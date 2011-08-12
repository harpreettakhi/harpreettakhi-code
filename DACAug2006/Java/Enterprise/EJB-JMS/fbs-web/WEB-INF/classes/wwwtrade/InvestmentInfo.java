package wwwtrade;

import trading.*;
import javax.naming.*;
import java.util.*;

public class InvestmentInfo{

	public double getInvestmentIn(String compid){
		try{		
			Context naming = new InitialContext();
			CompanyLocalHome home = (CompanyLocalHome) naming.lookup("java:comp/env/ejb/Company");
			try{
				CompanyLocal comp = home.findByPrimaryKey(compid);
				return comp.getStock() * comp.getPrice();
			}catch(javax.ejb.ObjectNotFoundException e){
				return 0;
			}
		}catch(Exception e){ 
			throw new RuntimeException(e);
		}
	}	

	public String[] listCompanies(){
		try{		
			Context naming = new InitialContext();
			CompanyLocalHome home = (CompanyLocalHome) naming.lookup("java:comp/env/ejb/Company");
			Collection col = home.findAll();
			String[] list = new String[col.size()];
			int k = 0;
			for(Iterator i = col.iterator(); i.hasNext();){
				CompanyLocal comp = (CompanyLocal) i.next();
				list[k++] = comp.getId();
			}
			return list;
		}catch(Exception e){ 
			throw new RuntimeException(e);
		}
	}	
}







