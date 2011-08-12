import finance.*;
import java.text.*;

class EMICalc{

	public static void main(String[] args) throws Exception{
		double p = Double.parseDouble(args[0]);
		int n = Integer.parseInt(args[1]);
		Class c = Class.forName(args[2]);
		LoanPolicy pol = (LoanPolicy) c.newInstance();
		float r = pol.interestRate(p, n);
		int m = 12 * n;
		float i = r / 1200;
		double emi = p * i / (1 - Math.pow(1 + i, -m));
		DecimalFormat df = new DecimalFormat("0.00");
		System.out.println("E.M.I : " + df.format(emi));
	}
}







