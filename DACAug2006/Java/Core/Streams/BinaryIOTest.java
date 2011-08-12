import payroll.*;
import java.io.*;

class BinaryIOTest{

	public static void main(String[] args) throws Exception{
		String file = "manager.dat";
		if(args.length > 2){
			int i = Integer.parseInt(args[0]);
			short h = Short.parseShort(args[1]);
			float r = Float.parseFloat(args[2]);
			Employee emp = new Employee(i, h, r);
			FileOutputStream fout = new FileOutputStream(file);
			DataOutputStream out = new DataOutputStream(fout);
			out.writeInt(emp.getId());
			out.writeShort(emp.getHours());
			out.writeFloat(emp.getRate());
			out.close();
		}else{
			FileInputStream fin = new FileInputStream(file);
			DataInputStream in = new DataInputStream(fin);
			int i = in.readInt();
			short h = in.readShort();
			float r = in.readFloat();			
			in.close();
			Employee emp = new Employee(i, h, r);
			System.out.println(emp);
		}
	}
}













