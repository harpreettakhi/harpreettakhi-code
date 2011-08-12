import javax.jms.*;
import javax.naming.*;

class StockPriceSubscriber{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		TopicConnectionFactory factory = (TopicConnectionFactory) naming.lookup("java:comp/env/jms/FBSTCF");
		TopicConnection connection = factory.createTopicConnection();
		connection.start();
		TopicSession session = connection.createTopicSession(false, Session.AUTO_ACKNOWLEDGE);
		Topic topic = session.createTopic("Demo Topic");
		TopicSubscriber subscriber = session.createSubscriber(topic);
		while(true){
			Message msg = subscriber.receive();
			if(msg.getJMSType().equals("StockQuote"))
				System.out.println(msg.getStringProperty("CompanyId") + "\t" + msg.getDoubleProperty("SharePrice"));
			else
				break;
		}
		session.close();
		connection.close();
	}
}





