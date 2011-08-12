package banking;

public abstract class Account{
	
	public abstract String getId();
	public abstract double getBalance();
	public abstract void deposit(double amount);
	public abstract void withdraw(double amount) throws InsufficientFundsException; 

	public final void transfer(double amount, Account other) throws InsufficientFundsException{
		if(other == this)
			throw new IllegalTransferException();
		this.withdraw(amount);
		other.deposit(amount);
	}

}