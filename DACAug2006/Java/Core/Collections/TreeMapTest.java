import payroll.*;
import java.util.*;

class TreeMapTest{

	public static void main(String[] args){
		Map dept = new TreeMap();
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
			Set entries = dept.entrySet();
			Iterator i = entries.iterator();
			while(i.hasNext()){
				Map.Entry entry = (Map.Entry) i.next();
				System.out.println(entry.getKey() + "\t" + entry.getValue());
			}
		}
	}
}














