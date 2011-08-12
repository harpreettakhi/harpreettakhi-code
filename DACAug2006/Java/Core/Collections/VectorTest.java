import payroll.*;
import java.util.*;

class VectorTest{

	public static void main(String[] args){
		Vector dept = new Vector();
		dept.addElement(new Employee(195, 200));
		dept.addElement(new Employee(200, 90));
		dept.addElement(new Employee(160, 240));
		dept.addElement(new Employee(185, 110));
		dept.addElement(new Salesman(190, 85, 75000));
		/*
		for(int i = 0; i < dept.size(); i++){
			Employee emp = (Employee) dept.elementAt(i);
			System.out.println(emp + "\t" + emp.getNetIncome());
		}
		*/
		Enumeration e = dept.elements();
		while(e.hasMoreElements()){
			Employee emp = (Employee) e.nextElement();
			System.out.println(emp + "\t" + emp.getNetIncome());
		}
	}
}












