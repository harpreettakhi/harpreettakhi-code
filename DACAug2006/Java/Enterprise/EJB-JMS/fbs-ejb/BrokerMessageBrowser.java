import javax.naming.*;
import javax.jms.*;
import java.util.*;

class BrokerMessageBrowser{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		QueueConnectionFactory factory = (QueueConnectionFactory) naming.lookup("java:comp/env/jms/FBSQCF");
		QueueConnection connection = factory.createQueueConnection();
		connection.start();
		QueueSession session = connection.createQueueSession(false, Session.AUTO_ACKNOWLEDGE);
		Queue queue = session.createQueue("Demo Queue");
		QueueBrowser browser = session.createBrowser(queue);
		Enumeration e = browser.getEnumeration();
		while(e.hasMoreElements()){
			Message msg = (Message) e.nextElement();
			long t = msg.getJMSTimestamp();
			System.out.println(msg.getStringProperty("Action") + "\t" + new Date(t));
		}
		session.close();
		connection.close();
	}
}








