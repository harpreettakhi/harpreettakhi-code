import power.*;

class PowerConsoleTest1{

	public static void main(String[] args){
		System.out.print("Password : ");
		String pwd = Console.readPassword();
		if(pwd.equals("solaris"))
			System.out.println("Access granted.");
		else
			System.out.println("Access denied.");
	}
}
