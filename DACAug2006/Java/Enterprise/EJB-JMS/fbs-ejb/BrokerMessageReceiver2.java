import javax.naming.*;
import javax.jms.*;

class BrokerMessageReceiver2{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		QueueConnectionFactory factory = (QueueConnectionFactory) naming.lookup("java:comp/env/jms/FBSQCF");
		QueueConnection connection = factory.createQueueConnection();
		connection.start();
		QueueSession session = connection.createQueueSession(true, Session.AUTO_ACKNOWLEDGE);
		Queue queue = session.createQueue("Demo Queue");
		QueueReceiver receiver = session.createReceiver(queue);
		Message msg = receiver.receive();
		System.out.println(msg.getStringProperty("Action"));
		if(args.length > 0 && args[0].equals("remove"))
			session.commit();
		else
			session.rollback();
		session.close();
		connection.close();
	}
}








