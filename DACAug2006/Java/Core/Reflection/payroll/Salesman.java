package payroll;

public class Salesman extends Employee{
	
	private double sales;
	
	public Salesman(int h, float r, double s){
		super(h, r);
		sales = s;
	}

	public final double getSales(){
		return sales;
	}

	public final void setSales(double value){
		sales = value;
	}

	public double getNetIncome(){
		double income = super.getNetIncome();
		if(sales > 25000)
			income += 0.05 * income;
		else
			income *= 0.98;
		return income;
	}

}














