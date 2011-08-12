import payroll.*;
import java.io.*;

class SerializeTest{

	public static void main(String[] args) throws Exception{
		String file = "manager.ser";
		if(args.length > 2){
			int i = Integer.parseInt(args[0]);
			short h = Short.parseShort(args[1]);
			float r = Float.parseFloat(args[2]);
			SEmployee emp = new SEmployee(i, h, r);
			emp.setPassword("solaris");
			FileOutputStream fout = new FileOutputStream(file);
			ObjectOutputStream out = new ObjectOutputStream(fout);
			out.writeObject(emp);
			out.close();
		}else{
			FileInputStream fin = new FileInputStream(file);
			ObjectInputStream in = new ObjectInputStream(fin);
			SEmployee emp = (SEmployee) in.readObject();
			in.close();
			System.out.println(emp);			
		}
	}
}













