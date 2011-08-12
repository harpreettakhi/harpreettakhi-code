package banking;

public abstract class BankAccount extends Account{
	
	String id;
	protected double balance;
	
	public String getId(){
		return id;
	}
	
	public double getBalance(){
		return balance;
	}

	public void deposit(double amount){
		balance += amount;
	}

}



