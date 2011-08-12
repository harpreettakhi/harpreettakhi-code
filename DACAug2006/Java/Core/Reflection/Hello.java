public class Hello{

	public static void main(String[] args){
		if(args.length == 0){
			System.out.println("Hello " + System.getProperty("user.name"));
			return;
		}
		for(int i = 0; i < args.length; i++)
			System.out.println("Hello " + args[i]);
	}
}
