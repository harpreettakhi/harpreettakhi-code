import payroll.*;

class PayrollTest2{
	
	public static double averageIncome(Employee[] employees){
		double total = 0;
		for(int i = 0; i < employees.length; i++)
			total += employees[i].getNetIncome();
		return total / employees.length;		
	}

	public static double totalSales(Employee[] employees){
		double total = 0;
		for(int i = 0; i < employees.length; i++){
			if(employees[i] instanceof Salesman){
				Salesman sm = (Salesman)employees[i];
				total += sm.getSales();
			}
		}
		return total;		
	}


public static void main(String[] args){
		Employee[] dept = {
			new Employee(185, 70), 
			new Employee(200, 85),
			new Salesman(160, 75, 45000),
			new Employee(240, 300),
			new Salesman(195, 90, 80000)
		};
		System.out.println("Average Income : " + averageIncome(dept));
		System.out.println("Total Sales : "  + totalSales(dept));
		Salesman[] sdept = {
			new Salesman(150, 70, 90000),
			new Salesman(200, 65, 85000)
		};
		double t = totalSales(sdept);
	}
}









