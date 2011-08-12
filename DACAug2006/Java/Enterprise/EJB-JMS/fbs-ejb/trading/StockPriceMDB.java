package trading;

import javax.ejb.*;
import javax.jms.*;
import javax.naming.*;

public class StockPriceMDB implements MessageListener, MessageDrivenBean{

	private CompanyLocalHome companyHome;
	private MessageDrivenContext context;

	public void ejbCreate(){
		try{
			Context naming = new InitialContext();
			companyHome = (CompanyLocalHome) naming.lookup("java:comp/env/ejb/Company");
		}catch(Exception e){
			System.out.println(e);
		}
	}

	public void onMessage(Message msg){
		try{
			String compid = msg.getStringProperty("CompanyId");
			double price = msg.getDoubleProperty("SharePrice");
			try{
				CompanyLocal comp = companyHome.findByPrimaryKey(compid);
				comp.setPrice(price);
			}catch(ObjectNotFoundException e){}
		}catch(Exception e){
			System.out.println(e);
		}
	}

	public void setMessageDrivenContext(MessageDrivenContext ctx){
		context = ctx;
	}

	public void ejbRemove(){}
}









