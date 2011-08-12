import payroll.*;
import java.util.*;

class HashtableTest{

	public static void main(String[] args){
		Hashtable dept = new Hashtable();
		dept.put("john", new Employee(195, 200));
		dept.put("jack", new Employee(200, 90));
		dept.put("jane", new Employee(160, 240));
		dept.put("jeff", new Employee(185, 110));
		dept.put("jim", new Salesman(190, 85, 75000));
		dept.put("john", new Employee(155, 95));
		if(args.length > 0){
			Employee emp = (Employee) dept.get(args[0]);
			if(emp != null)
				System.out.println(emp + "\t" + emp.getNetIncome());
		}else{
			Enumeration e = dept.keys();
			while(e.hasMoreElements()){
				String name = (String) e.nextElement();
				Employee emp = (Employee) dept.get(name);
				System.out.println(name + "\t" + emp);
			} 
		}
	}
}














