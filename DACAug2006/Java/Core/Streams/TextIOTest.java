import payroll.*;
import java.io.*;

class TextIOTest{

	public static void main(String[] args) throws Exception{
		String file = "manager.txt";
		if(args.length > 2){
			int i = Integer.parseInt(args[0]);
			short h = Short.parseShort(args[1]);
			float r = Float.parseFloat(args[2]);
			Employee emp = new Employee(i, h, r);
			FileOutputStream fout = new FileOutputStream(file);
			PrintWriter out = new PrintWriter(
					new OutputStreamWriter(fout));
			out.println(emp.getId());
			out.println(emp.getHours());
			out.println(emp.getRate());
			out.close();
		}else{
			FileInputStream fin = new FileInputStream(file);
			BufferedReader in = new BufferedReader(
					new InputStreamReader(fin));
			int i = Integer.parseInt(in.readLine());
			short h = Short.parseShort(in.readLine());
			float r = Float.parseFloat(in.readLine());
			in.close();
			Employee emp = new Employee(i, h, r);
			System.out.println(emp);
		}
	}
}













