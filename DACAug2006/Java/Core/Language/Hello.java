class Greeter{
	
	static{
		System.out.println("Greeter Initialized");
	}
	
	public static void greet(String name){
		System.out.println("Hello " + name);
	}
}

class Hello{
	
	public static void main(String[] args){
		if(args.length > 0)
			Greeter.greet(args[0]);
		else
			System.out.println("Hello World!");
	}
}

