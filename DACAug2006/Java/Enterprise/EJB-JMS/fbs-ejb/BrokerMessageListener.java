import javax.naming.*;
import javax.jms.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class BrokerMessageListener extends JFrame implements MessageListener{

	JTextArea txtOut = new JTextArea();
	String nl = System.getProperty("line.separator");

	public BrokerMessageListener(){
		super("Broker Messages");
		setSize(300, 300);
		txtOut.setEditable(false);
		getContentPane().add(txtOut);		
	}

	public void processWindowEvent(WindowEvent we){
		if(we.getID() == WindowEvent.WINDOW_CLOSING){
			synchronized(this){
				notify();
			}
		}
		super.processWindowEvent(we);		
	}

	public void onMessage(Message msg){
		try{
			final String text = msg.getStringProperty("Action") + nl;
			Runnable r = new Runnable(){
				public void run(){
					txtOut.append(text);
				}
			};
			SwingUtilities.invokeLater(r);
		}catch(JMSException e){}
	}

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		QueueConnectionFactory factory = (QueueConnectionFactory) naming.lookup("java:comp/env/jms/FBSQCF");
		QueueConnection connection = factory.createQueueConnection();
		connection.start();
		QueueSession session = connection.createQueueSession(false, Session.AUTO_ACKNOWLEDGE);
		Queue queue = session.createQueue("Demo Queue");
		QueueReceiver receiver = session.createReceiver(queue);
		BrokerMessageListener app = new BrokerMessageListener();
		receiver.setMessageListener(app);
		app.setVisible(true);
		synchronized(app){
			app.wait();
		}
		session.close();
		connection.close();
		System.exit(0);
	}
}








