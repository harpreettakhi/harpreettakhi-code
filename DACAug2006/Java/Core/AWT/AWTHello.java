import java.awt.*;
import java.awt.event.*;

public class AWTHello extends Frame implements ActionListener{

	private Color col = Color.RED; //new Color(255, 0, 0);
	private Button btnBlue = new Button("Blue");
	private Button btnRed = new Button("Red");

	public AWTHello(){
		super("Hello AWT");
		setSize(400, 400);
		//add(btnBlue, BorderLayout.NORTH);
		setLayout(new FlowLayout(FlowLayout.LEFT));
		add(btnBlue);
		btnBlue.addActionListener(this);
		add(btnRed);
		btnRed.addActionListener(this);
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
		Dimension d = this.getSize();
		g.setColor(col);
		g.fillOval(d.width / 2 - 100, d.height / 2 - 100, 200, 200);
	}

	public void actionPerformed(ActionEvent ae){
		col = (ae.getSource() == btnBlue) ? Color.BLUE : Color.RED;
		repaint();
	}

	public static void main(String[] args){
		AWTHello app = new AWTHello();
		app.setVisible(true);
		System.out.println("All Done!");
	}
}








