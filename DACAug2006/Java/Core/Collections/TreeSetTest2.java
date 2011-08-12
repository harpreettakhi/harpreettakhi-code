import payroll.*;
import java.util.*;

class TreeSetTest2{

	public static void main(String[] args){
		Comparator c = new Comparator(){
			public int compare(Object first, Object second){
				Employee a = (Employee) first;
				Employee b = (Employee) second;
				if(a.getHours() != b.getHours())
					return b.getHours() - a.getHours();
				return a.getId() - b.getId();
			}
		};
		Set dept = new TreeSet(c);
		dept.add(new Employee(195, 200));
		dept.add(new Employee(200, 90));
		dept.add(new Employee(160, 240));
		dept.add(new Employee(185, 110));
		dept.add(new Salesman(200, 85, 75000));
		dept.add(new Employee(103, 160, 210));
		Iterator i = dept.iterator();
		while(i.hasNext()){
			Employee emp = (Employee) i.next();
			System.out.println(emp + "\t" + emp.getNetIncome());
		}
	}
}












