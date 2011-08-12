import java.awt.*;
import java.net.*;
import java.text.*;
import java.util.*;
import java.applet.*;

public class ClockApplet extends Applet implements Runnable{

	Label lblTime = new Label();
	Thread t = null;
	SimpleDateFormat sdf = new SimpleDateFormat("HH:mm:ss");
	URL page = null;
	int time = -1;
	
	public void init(){
		lblTime.setBackground(Color.BLACK);
		lblTime.setForeground(Color.GREEN);
		lblTime.setFont(new Font("Helvitica", Font.BOLD, 32));
		setLayout(new BorderLayout());
		add(lblTime);
		try{
			page = new URL(getParameter("page"));
			time = Integer.parseInt(getParameter("time"));
		}catch(Exception e){}
	}

	public void start(){
		if(t == null){
			t = new Thread(this);
			t.start();
		}	
	}

	public void stop(){
		if(t != null){
			t.interrupt();
			t = null;
		}
	}

	public void run(){
		int count = 0;
		while(!Thread.interrupted()){
			Date now = new Date();
			lblTime.setText(sdf.format(now));
			try{
				Thread.sleep(1000);
			}catch(InterruptedException e){
				break;
			}
			if(++count == time){
				AppletContext browser = getAppletContext();
				browser.showDocument(page);
			}
		}
	}

	public void switchState(){
		if(t == null)
			start();
		else
			stop();
	}
}









