import java.io.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.table.*;

public class SwingTableTest extends JFrame implements ActionListener{

	JTextField txtPath = new JTextField(System.getProperty("user.home"));
	JTable tblFiles = new JTable();
	JScrollPane pane = new JScrollPane(tblFiles);

	public SwingTableTest(){
		super("SwingTableTest");
		setSize(400, 400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setUndecorated(true);
		getRootPane().setWindowDecorationStyle(JRootPane.FRAME);
		getContentPane().add(txtPath, BorderLayout.NORTH);		
		getContentPane().add(pane, BorderLayout.CENTER);
		txtPath.addActionListener(this);
	}


	public void actionPerformed(ActionEvent ae){
		String path = txtPath.getText().trim();
		if(path.equals("")) return;
		pane.setVisible(false);
		tblFiles.setModel(new DirectoryTableModel(path));
		pane.setVisible(true);
	}

	class DirectoryTableModel extends AbstractTableModel{
		
		private File[] dir;

		public DirectoryTableModel(String path){
			File f = new File(path);
			dir = f.listFiles();
		}

		public int getColumnCount(){
			return 4;
		}

		public String getColumnName(int i){
			String[] names = {"Name", "Size", "Modified", "Directory"};
			return names[i];
		}

		public Class getColumnClass(int i){
			Class[] types = {String.class, Long.class, Date.class, Boolean.class};
			return types[i];
		}

		public int getRowCount(){
			return dir.length;
		}

		public Object getValueAt(int i, int j){
			File f = dir[i];
			Object[] entry = {f.getName(), new Long(f.length()), new Date(f.lastModified()), new Boolean(f.isDirectory())};
			return entry[j];
		}

		public boolean isCellEditable(int i, int j){
			return false;
		}
	}

	public static void main(String[] args){
		SwingTableTest app = new SwingTableTest();
		app.setVisible(true);
	}
}








