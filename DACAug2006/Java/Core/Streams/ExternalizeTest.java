import payroll.*;
import java.io.*;

class ExternalizeTest{

	public static void main(String[] args) throws Exception{
		String file = "manager.ext";
		if(args.length > 2){
			int i = Integer.parseInt(args[0]);
			short h = Short.parseShort(args[1]);
			float r = Float.parseFloat(args[2]);
			EEmployee emp = new EEmployee(i, h, r);
			FileOutputStream fout = new FileOutputStream(file);
			ObjectOutputStream out = new ObjectOutputStream(fout);
			out.writeObject(emp);
			out.close();
		}else{
			FileInputStream fin = new FileInputStream(file);
			ObjectInputStream in = new ObjectInputStream(fin);
			EEmployee emp = (EEmployee) in.readObject();
			in.close();
			System.out.println(emp);			
		}
	}
}













