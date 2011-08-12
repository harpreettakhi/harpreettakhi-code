import payroll.*;
import java.util.*;

class TreeSetTest1{

	public static void main(String[] args){
		Set dept = new TreeSet();
		dept.add(new Employee(195, 200));
		dept.add(new Employee(200, 90));
		dept.add(new Employee(160, 240));
		dept.add(new Employee(185, 110));
		dept.add(new Salesman(190, 85, 75000));
		dept.add(new Employee(103, 110, 210));
		Iterator i = dept.iterator();
		while(i.hasNext()){
			Employee emp = (Employee) i.next();
			System.out.println(emp + "\t" + emp.getNetIncome());
		}
	}
}












