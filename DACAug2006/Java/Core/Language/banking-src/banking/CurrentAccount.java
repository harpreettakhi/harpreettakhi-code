package banking;

public final class CurrentAccount extends BankAccount{
	
	public CurrentAccount(){
		id = "C/A";
		balance = 0;
	}

	public void withdraw(double amount){
		balance -= amount;
	}
}
