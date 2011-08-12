import java.awt.*;
import java.awt.event.*;

public class AWTSimpleTest extends Frame{


	public AWTSimpleTest(){
		super("Hello AWT");
		setSize(400, 400);
		enableEvents(AWTEvent.WINDOW_EVENT_MASK);			
	}

	public void processWindowEvent(WindowEvent we){
		if(we.getID() == WindowEvent.WINDOW_CLOSING)
			System.exit(0);
		super.processWindowEvent(we);
	}


	public static void main(String[] args){
		AWTSimpleTest app = new AWTSimpleTest();
		app.setVisible(true);
		System.out.println("All Done!");
	}
}








