import java.text.*;
import java.lang.reflect.*;

class DynamicEMICalc{

	public static void main(String[] args) throws Exception{
		double p = Double.parseDouble(args[0]);
		int n = Integer.parseInt(args[1]);
		Class c = Class.forName(args[2]);
		Object pol = c.newInstance();
		String methName = "interestRate";
		Class[] signature = {double.class, int.class};
		Method meth = c.getMethod(methName, signature);
		Object[] arguments = {new Double(p), new Integer(n)};
		Float result = (Float) meth.invoke(pol, arguments);
		float r = result.floatValue();
		int m = 12 * n;
		float i = r / 1200;
		double emi = p * i / (1 - Math.pow(1 + i, -m));
		DecimalFormat df = new DecimalFormat("0.00");
		System.out.println("E.M.I : " + df.format(emi));
	}
}







