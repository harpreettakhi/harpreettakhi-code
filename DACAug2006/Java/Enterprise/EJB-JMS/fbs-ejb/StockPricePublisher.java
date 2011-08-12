import javax.jms.*;
import javax.naming.*;

class StockPricePublisher{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		TopicConnectionFactory factory = (TopicConnectionFactory) naming.lookup("java:comp/env/jms/FBSTCF");
		TopicConnection connection = factory.createTopicConnection();
		connection.start();
		TopicSession session = connection.createTopicSession(false, Session.AUTO_ACKNOWLEDGE);
		Topic topic = session.createTopic("Demo Topic");
		TopicPublisher publisher = session.createPublisher(topic);
		Message msg = session.createMessage();
		if(args.length > 1){
			msg.setJMSType("StockQuote");
			msg.setStringProperty("CompanyId", args[0]);
			msg.setDoubleProperty("SharePrice", Double.parseDouble(args[1]));
		}else{
			msg.setJMSType("Quit");
		}
		publisher.publish(msg);
		session.close();
		connection.close();
	}
}





