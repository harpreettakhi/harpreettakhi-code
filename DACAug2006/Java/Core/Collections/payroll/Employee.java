package payroll;

public class Employee implements Comparable{
			
	private int id;
	private int hours;
	private float rate;
	private static int count;
	
	public Employee(int h, float r){
		id = 101 + count++;
		hours = h;
		rate = r;
	}
	
	public Employee(){
		this(0, 0);
	}

	public Employee(int i, int h, float r){
		this(h, r);
		id = i;
	}
	
	public final int getId(){
		return id;
	}
	
	public final int getHours(){
		return hours;
	}

	public final void setHours(int value){
		hours = value;
	}

	public final float getRate(){
		return rate;
	}

	public final void setRate(float value){
		rate = value;
	}

	public double getNetIncome(){
		double income = hours * rate;
		int ot = hours - 180;
		if(ot > 0)
			income += 0.5 * ot * rate;
		return income;		
	}
	
	public static int countEmployees(){
		return count;	
	}

	public String toString(){
		return id + "\t" + hours + "\t" + rate;
	}

	public int hashCode(){
		return id;
	}

	public boolean equals(Object other){
		if(other instanceof Employee){
			Employee that = (Employee) other;
			return this.id == that.id;
		}
		return false;
	}

	public void finalize(){
		System.out.println("-- Employee(" + id + ") reclaimed");
	}

	public int compareTo(Object other){
		Employee that = (Employee) other;
		return this.id - that.id;		
	}			
}














