import java.lang.reflect.*;

class ReflectionTest{

	public static void printObject(Object obj){
		Class c = obj.getClass();
		System.out.println("Class : " + c.getName());
		printFields(obj, c);
	}

	private static void printFields(Object obj, Class c){
		Class sc = c.getSuperclass();
		if(sc != Object.class) printFields(obj, sc);
		Field[] fields = c.getDeclaredFields();
		for(int i = 0; i < fields.length; i++){
			int m = fields[i].getModifiers();
			if(Modifier.isStatic(m)) continue;
			System.out.print(fields[i].getName() + " : ");
			try{
				fields[i].setAccessible(true);
				System.out.println(fields[i].get(obj));
			}catch(Exception e){
				System.out.println(e);
			}
		}
	}	

	public static void main(String[] args) throws Exception{
		if(args.length == 0){
			printObject(new payroll.Salesman(190, 110, 45000));
		}else{
			Class c = Class.forName(args[0]);
			Object obj = c.newInstance();
			printObject(obj);			
		}
	}
}








