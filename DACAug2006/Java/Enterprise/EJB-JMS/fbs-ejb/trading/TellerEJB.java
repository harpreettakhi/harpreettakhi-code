package trading;

import javax.ejb.*;
import javax.naming.*;

public class TellerEJB implements SessionBean{

	private AccountLocal account;
	private SessionContext context;

	public void credit(double amount) throws TradingException{
		if(amount > 50000 && !context.isCallerInRole("administrators"))
			throw new TradingException("Current user cannot credit amount greater than 50000");
		double balance = account.getBalance();
		account.setBalance(balance + amount);
	}

	public void debit(double amount) throws TradingException{
		if(amount > 50000 && !context.isCallerInRole("administrators"))
			throw new TradingException("Current user cannot debit amount greater than 50000");
		double balance = account.getBalance();
		if(amount > balance)
			throw new TradingException("Insufficient balance in account " + account.getId());
		account.setBalance(balance - amount);
	}

	public void ejbCreate(int accid) throws CreateException{
		try{
			Context naming = new InitialContext();
			AccountLocalHome home = (AccountLocalHome) naming.lookup("java:comp/env/ejb/Account");
			account = home.findByPrimaryKey(new Integer(accid));
		}catch(Exception e){
			throw new CreateException(e.getMessage());
		}
	}

	public void setSessionContext(SessionContext ctx){
		context = ctx;
	}
	
	public void ejbActivate(){}
	public void ejbPassivate(){}
	public void ejbRemove(){}
}










