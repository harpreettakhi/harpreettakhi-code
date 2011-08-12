import java.awt.*;
import java.awt.event.*;

public class AWTChildCompTest extends Frame implements ActionListener{

	private Button btnGreet = new Button("Greet");

	public AWTChildCompTest(){
		super("Hello AWT");
		setSize(400, 400);
		enableEvents(AWTEvent.WINDOW_EVENT_MASK);
		setLayout(new FlowLayout());
		add(btnGreet);
		btnGreet.addActionListener(this);		
	}

	public void processWindowEvent(WindowEvent we){
		if(we.getID() == WindowEvent.WINDOW_CLOSING)
			System.exit(0);
		super.processWindowEvent(we);
	}

	public void actionPerformed(ActionEvent ae){
		MessageDialog.show(this, "Hello User", "Hello AWT");
	}

	static class MessageDialog extends Dialog{
		
		private Label lblMsg = new Label(null, Label.CENTER);
	
		private MessageDialog(Frame parent){
			super(parent, true);
			Rectangle r = parent.getBounds();
			setBounds(r.x + r.width / 2 - 100, r.y + r.height / 2 - 50, 200, 100);
			enableEvents(AWTEvent.WINDOW_EVENT_MASK);
			add(lblMsg);
		}

		public void processWindowEvent(WindowEvent we){
			if(we.getID() == WindowEvent.WINDOW_CLOSING)
				dispose();
			super.processWindowEvent(we);
		}

		public static void show(Frame parent, String message, String title){
			MessageDialog dlg = new MessageDialog(parent);
			dlg.setTitle(title);
			dlg.lblMsg.setText(message);
			dlg.setVisible(true);	
		}

	}

	public static void main(String[] args){
		AWTChildCompTest app = new AWTChildCompTest();
		app.setVisible(true);
		System.out.println("All Done!");
	}
}








