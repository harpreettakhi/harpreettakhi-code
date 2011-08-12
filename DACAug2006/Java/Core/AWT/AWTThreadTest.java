import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class AWTThreadTest extends Frame{

	Random r = new Random();

	public AWTThreadTest(){
		super("Hello AWT");
		setSize(400, 400);
		enableEvents(AWTEvent.WINDOW_EVENT_MASK | AWTEvent.COMPONENT_EVENT_MASK);			
	}

	public void processWindowEvent(WindowEvent we){
		if(we.getID() == WindowEvent.WINDOW_CLOSING)
			System.exit(0);
		super.processWindowEvent(we);
	}

	public void processComponentEvent(ComponentEvent ce){
		if(ce.getID() == ComponentEvent.COMPONENT_RESIZED)
			repaint();
		super.processComponentEvent(ce);
	}

	public void paint(Graphics g){
		Color c = new Color(r.nextInt(256), r.nextInt(256), r.nextInt(256));
		g.setColor(c);
		Dimension d = this.getSize();
		g.fillOval(d.width / 2 - 100, d.height / 2 - 100, 200, 200);
		g.setColor(Color.BLACK);
		g.drawString(new Date().toString(), 10, d.height - 10);	
	}

	public static void main(String[] args) throws Exception{
		AWTThreadTest app = new AWTThreadTest();
		app.setVisible(true);
		for(;;){
			Thread.sleep(3000);
			app.repaint();
		}
	}
}








