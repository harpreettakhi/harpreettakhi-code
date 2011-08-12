package banking;

public final class SavingsAccount extends BankAccount implements Profitable{
	
	public static final double MIN_BALANCE = 1500;
	
	public SavingsAccount(){
		id = "S/A";
		balance = MIN_BALANCE;
	}

	public void withdraw(double amount) throws InsufficientFundsException{
		if(balance - amount < MIN_BALANCE)
			throw new InsufficientFundsException();
		balance -= amount;
	}
	
	public double addInterest(int period, float rate){
		double interest = balance * period * rate / 100;
		balance += interest;
		return interest;
	}

}










