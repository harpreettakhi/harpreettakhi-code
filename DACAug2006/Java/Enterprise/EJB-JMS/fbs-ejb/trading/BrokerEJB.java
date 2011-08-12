package trading;

import javax.ejb.*;
import javax.naming.*;
import javax.jms.*;
import java.util.logging.*;

public class BrokerEJB implements SessionBean{

	private AccountLocalHome accountHome;
	private CompanyLocalHome companyHome;
	private HoldingLocalHome holdingHome;
	private float b;
	
	private SessionContext context;

	public void ejbCreate() throws CreateException{
		try{
			Context naming = new InitialContext();
			accountHome = (AccountLocalHome) naming.lookup("java:comp/env/ejb/Account");
			companyHome = (CompanyLocalHome) naming.lookup("java:comp/env/ejb/Company");
			holdingHome = (HoldingLocalHome) naming.lookup("java:comp/env/ejb/Holding");
			Float f = (Float) naming.lookup("java:comp/env/Brokerage");
			b = f.floatValue();
		}catch(Exception e){
			throw new CreateException(e.getMessage());
		}
	}

	public void buy(int accid, String compid, int quantity) throws TradingException, FinderException{
		AccountLocal acc = accountHome.findByPrimaryKey(new Integer(accid));
		CompanyLocal comp = companyHome.findByPrimaryKey(compid);
		double balance = acc.getBalance();
		int stock = comp.getStock();
		double amount = quantity * comp.getPrice() * (1 + b / 100);
		if(amount > balance)
			throw new TradingException("Insufficient balance in account " + accid);
		if(quantity > stock)
			throw new TradingException("Out of " + compid + " stock : Broker");
		try{
			HoldingLocal h = holdingHome.findByPrimaryKey(new HoldingPK(accid, compid));
			int shares = h.getShares();
			h.setShares(shares + quantity);
		}catch(ObjectNotFoundException e){
			try{
				holdingHome.create(accid, compid, quantity);
			}catch(CreateException ce){
				throw new EJBException(ce);
			}
		}
		acc.setBalance(balance - amount);
		comp.setStock(stock - quantity);
		sendMessage(accid + " bought " + quantity + " share/s of " + compid);
	}

	public void sell(int accid, String compid, int quantity) throws TradingException, FinderException{
		AccountLocal acc = accountHome.findByPrimaryKey(new Integer(accid));
		CompanyLocal comp = companyHome.findByPrimaryKey(compid);
		double balance = acc.getBalance();
		int stock = comp.getStock();
		double amount = quantity * comp.getPrice() * (1 - b / 100);
		try{
			HoldingLocal h = holdingHome.findByPrimaryKey(new HoldingPK(accid, compid));
			int shares = h.getShares();
			if(quantity > shares)
				throw new TradingException("Out of " + compid + " shares : " + accid);
			if(quantity < shares)
				h.setShares(shares - quantity);
			else{
				try{
					h.remove();
				}catch(RemoveException e){
					throw new EJBException(e);
				}
			}
		}catch(ObjectNotFoundException e){
			throw new TradingException("Out of " + compid + " shares : " + accid);
		}
		acc.setBalance(balance + amount);
		comp.setStock(stock + quantity);
		sendMessage(accid + " sold " + quantity + " share/s of " + compid);
	}

	public void setSessionContext(SessionContext ctx){
		context = ctx;
	}
	
	public void ejbActivate(){}
	public void ejbPassivate(){}
	public void ejbRemove(){}

	private void sendMessage(String text){
		try{
			Context naming = new InitialContext();
			QueueConnectionFactory factory = (QueueConnectionFactory) naming.lookup("java:comp/env/jms/FBSQCF");
			QueueConnection connection = factory.createQueueConnection();
			connection.start();
			QueueSession session = connection.createQueueSession(false, Session.AUTO_ACKNOWLEDGE);
			Queue queue = (Queue) naming.lookup("java:comp/env/jms/FBSQ");
			QueueSender sender = session.createSender(queue);
			Message msg = session.createMessage();
			msg.setStringProperty("Action", text);
			sender.send(msg);
			session.close();
			connection.close();
		}catch(Exception e){
			Logger.global.log(Level.SEVERE, e.toString());
		}
	}
}










