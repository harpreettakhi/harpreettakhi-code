package banking;

public final class Banker{
	
	private int count;
	private static Banker singleton;
	
	private Banker(){}
	
	public static Banker getBanker(){
		if(singleton == null)
			singleton = new Banker();
		return singleton;
	}
	
	public Account openAccount(double amount, boolean savings){
		BankAccount acc;
		if(savings)
			acc = new SavingsAccount();
		else 
			acc = new CurrentAccount();
		acc.id += (1001 + count++);
		acc.deposit(amount);
		return acc;
	}
	
	public Account openAccount(double amount){
		return openAccount(amount, false);
	}
	
}






