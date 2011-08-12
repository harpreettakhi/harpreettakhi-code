package wwwtrade;

import trading.*;
import javax.naming.*;
import javax.transaction.*;

public class TraderBean implements java.io.Serializable{

	private int sourceAccountId;
	private int targetAccountId;
	private String companyId;
	private int shares;
	
	public final int getSourceAccountId(){
		return sourceAccountId;
	}

	public final void setSourceAccountId(int value){
		sourceAccountId = value;
	}

	public final int getTargetAccountId(){
		return targetAccountId;
	}

	public final void setTargetAccountId(int value){
		targetAccountId = value;
	}

	public final String getCompanyId(){
		return companyId;
	}

	public final void setCompanyId(String value){
		companyId = value;
	}

	public final int getShares(){
		return shares;
	}

	public final void setShares(int value){
		shares = value;
	}
	
	public void transfer() throws Exception{
		Context naming = new InitialContext();
		BrokerLocalHome home = (BrokerLocalHome) naming.lookup("java:comp/env/ejb/Broker");
		BrokerLocal broker = home.create();
		UserTransaction utx = (UserTransaction) naming.lookup("java:comp/UserTransaction");
		utx.begin();
		try{
			broker.sell(sourceAccountId, companyId, shares);
			broker.buy(targetAccountId, companyId, shares);
			utx.commit();
		}catch(Exception e){
			utx.rollback();
			throw e;
		}
	}
}










