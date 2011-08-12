import javax.naming.*;
import javax.jms.*;

class BrokerMessageReceiver1{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		QueueConnectionFactory factory = (QueueConnectionFactory) naming.lookup("java:comp/env/jms/FBSQCF");
		QueueConnection connection = factory.createQueueConnection();
		connection.start();
		QueueSession session = connection.createQueueSession(false, Session.CLIENT_ACKNOWLEDGE);
		Queue queue = session.createQueue("Demo Queue");
		QueueReceiver receiver = session.createReceiver(queue);
		Message msg = receiver.receive();
		System.out.println(msg.getStringProperty("Action"));
		if(args.length > 0 && args[0].equals("remove"))
			msg.acknowledge();
		session.close();
		connection.close();
	}
}








