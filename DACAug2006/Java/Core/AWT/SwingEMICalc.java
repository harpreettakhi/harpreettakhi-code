import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.text.*;

public class SwingEMICalc extends JFrame implements ActionListener, ItemListener, DocumentListener{

	String[] schemes = {"Educational", "Home", "Personal", "Business"};
	float[] rates = {6.5f, 8.0f, 9.0f, 10.5f};
	JTextField txtLoan = new JTextField();
	JTextField txtPeriod = new JTextField();
	JComboBox lstScheme = new JComboBox(schemes);
	JCheckBox chkEmployee = new JCheckBox("(Concession)");
	JTextField txtEMI = new JTextField();
	JButton btnCalc = new JButton("Calculate");
	DecimalFormat df = new DecimalFormat("0.00");

	public SwingEMICalc(){
		super("EMICalc");
		setSize(300, 250);
		setUndecorated(true);
		getRootPane().setWindowDecorationStyle(JRootPane.FRAME);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		JPanel p1 = new JPanel();
		p1.setLayout(new GridLayout(5, 2));
		p1.add(new JLabel("Loan : "));
		p1.add(txtLoan);
		p1.add(new JLabel("Period : "));
		p1.add(txtPeriod);
		p1.add(new JLabel("Scheme : "));
		p1.add(lstScheme);
		p1.add(new JLabel("Employee : "));
		p1.add(chkEmployee);
		p1.add(new JLabel("E.M.I : "));
		p1.add(txtEMI);
		getContentPane().add(p1, BorderLayout.NORTH);
		JPanel p2 = new JPanel();
		p2.add(btnCalc);
		getContentPane().add(p2, BorderLayout.SOUTH);
		lstScheme.setSelectedIndex(2);
		txtEMI.setEditable(false);
		JMenuBar mb = new JMenuBar();
		JMenu mnuHelp = new JMenu("Help");
		mnuHelp.setMnemonic('H');
		JMenuItem miAbout = new JMenuItem("About", 'A');
		miAbout.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent ae){
				JOptionPane.showMessageDialog(SwingEMICalc.this, "Copyright \u00A9 2006 ACME Softwares", "About EMICalc", 1, null);
			}
		});
		mnuHelp.add(miAbout);
		mb.add(mnuHelp);
		setJMenuBar(mb);
		btnCalc.addActionListener(this);
		txtLoan.addActionListener(this);
		txtPeriod.addActionListener(this);
		lstScheme.addItemListener(this);
		chkEmployee.addItemListener(this);
		txtLoan.getDocument().addDocumentListener(this);
		txtPeriod.getDocument().addDocumentListener(this);
	}

	public void actionPerformed(ActionEvent ae){
		calculate();
	}

	public void itemStateChanged(ItemEvent ie){
		calculate();
	}

	public void insertUpdate(DocumentEvent de){
		txtEMI.setText("");
	}

	public void removeUpdate(DocumentEvent de){
		txtEMI.setText("");
	}

	public void changedUpdate(DocumentEvent de){
	}

	private void calculate(){
		try{
			double loan = Double.parseDouble(txtLoan.getText());
			int period = Integer.parseInt(txtPeriod.getText());
			int k = lstScheme.getSelectedIndex();
			float rate = rates[k];
			if(chkEmployee.isSelected()) rate -= 5;
			int m = 12 * period;
			float i = rate / 1200;
			double emi = loan * i / (1 - Math.pow(1 + i, -m));
			txtEMI.setText(df.format(emi));
		}catch(NumberFormatException e){
			txtEMI.setText("ERROR!");
		}
	}

	public static void main(String[] args) throws Exception{
		// UIManager.setLookAndFeel(new com.sun.java.swing.plaf.motif.MotifLookAndFeel());
		// UIManager.setLookAndFeel(new com.sun.java.swing.plaf.windows.WindowsLookAndFeel());
		final SwingEMICalc app = new SwingEMICalc();		
		app.setVisible(true);
		Runnable r = new Runnable(){
			int count;
			public void run(){
				count += 10;
				app.setTitle("EMICalc used for " + count + " seconds");
			}
		};
		while(true){
			Thread.sleep(10000);
			// EventQueue.invokeLater(r);
			EventQueue.invokeAndWait(r);
		}
	}
}








