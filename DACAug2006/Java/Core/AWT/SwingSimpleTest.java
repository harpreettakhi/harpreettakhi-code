import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class SwingSimpleTest extends JFrame{


	public SwingSimpleTest(){
		super("Hello AWT");
		setSize(400, 400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setUndecorated(true);
		getRootPane().setWindowDecorationStyle(JRootPane.FRAME);			
	}


	public static void main(String[] args){
		SwingSimpleTest app = new SwingSimpleTest();
		app.setVisible(true);
	}
}








