import java.awt.*;
import java.awt.event.*;
import java.text.*;

public class AWTEMICalc extends Frame implements ActionListener, ItemListener, TextListener{

	String[] schemes = {"Educational", "Home", "Personal", "Business"};
	float[] rates = {6.5f, 8.0f, 9.0f, 10.5f};
	TextField txtLoan = new TextField();
	TextField txtPeriod = new TextField();
	Choice lstScheme = new Choice();
	Checkbox chkEmployee = new Checkbox("(Concession)");
	TextField txtEMI = new TextField();
	Button btnCalc = new Button("Calculate");
	DecimalFormat df = new DecimalFormat("0.00");

	public AWTEMICalc(){
		super("EMI Calc");
		setSize(240, 200);
		setBackground(Color.LIGHT_GRAY);
		enableEvents(AWTEvent.WINDOW_EVENT_MASK);
		Panel p1 = new Panel();
		p1.setLayout(new GridLayout(5, 2));
		p1.add(new Label("Loan : "));
		p1.add(txtLoan);
		p1.add(new Label("Period : "));
		p1.add(txtPeriod);
		p1.add(new Label("Scheme : "));
		p1.add(lstScheme);
		p1.add(new Label("Employee : "));
		p1.add(chkEmployee);
		p1.add(new Label("E.M.I : "));
		p1.add(txtEMI);
		add(p1, BorderLayout.NORTH);
		Panel p2 = new Panel();
		p2.add(btnCalc);
		add(p2, BorderLayout.SOUTH);
		for(int i = 0; i < schemes.length; i++)
			lstScheme.add(schemes[i]);
		lstScheme.select(2);
		txtEMI.setEditable(false);
		btnCalc.addActionListener(this);
		txtLoan.addActionListener(this);
		txtPeriod.addActionListener(this);
		lstScheme.addItemListener(this);
		chkEmployee.addItemListener(this);
		txtLoan.addTextListener(this);
		txtPeriod.addTextListener(this);
	}

	public void processWindowEvent(WindowEvent we){
		if(we.getID() == WindowEvent.WINDOW_CLOSING)
			System.exit(0);
		super.processWindowEvent(we);
	}

	public void actionPerformed(ActionEvent ae){
		calculate();
	}

	public void itemStateChanged(ItemEvent ie){
		if(ie.getSource() == lstScheme){
			if(lstScheme.getSelectedIndex() == 3){
				chkEmployee.setEnabled(false);
				chkEmployee.setState(false);
			}else
				chkEmployee.setEnabled(true);
		}
		calculate();
	}

	public void textValueChanged(TextEvent te){
		txtEMI.setText("");
	}

	private void calculate(){
		try{
			double loan = Double.parseDouble(txtLoan.getText());
			int period = Integer.parseInt(txtPeriod.getText());
			int k = lstScheme.getSelectedIndex();
			float rate = rates[k];
			if(chkEmployee.getState() == true) rate -= 5;
			int m = 12 * period;
			float i = rate / 1200;
			double emi = loan * i / (1 - Math.pow(1 + i, -m));
			txtEMI.setText(df.format(emi));
		}catch(NumberFormatException e){
			txtEMI.setText("ERROR!");
		}
	}

	public static void main(String[] args){
		AWTEMICalc app = new AWTEMICalc();
		app.setVisible(true);
	}
}








