import payroll.Employee;
import payroll.Salesman;

class PayrollTest1{
	
	public static double incomeTax(Employee e){
		double i = e.getNetIncome(); // invoke e.class, getNetIncome(), e
		return (i < 10000) ? 0 : 0.2 * i;	
	}
		
	public static void main(String[] args){
		Employee jack = new Employee();
		jack.setRate(70); // invoke Employee.class, setRate(float), jack, 70
		jack.setHours(140);
		Salesman john = new Salesman(140, 70, 80000);
		System.out.println("Jack : ID = " + jack.getId() + ", Income = " + jack.getNetIncome() + " and Tax = " + incomeTax(jack));
		System.out.println("John : ID = " + john.getId() + ", Income = " + john.getNetIncome() + " and Tax = " + incomeTax(john));
		System.out.println("Number of Employees = " + Employee.countEmployees());
		System.out.println(jack);
		System.out.println("H.C of Jack = " + jack.hashCode());
		System.out.println("I.H.C of Jack = " + System.identityHashCode(jack));
		john = null;
		System.gc();
	}
}





