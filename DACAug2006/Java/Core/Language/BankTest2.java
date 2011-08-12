import banking.*;

class BankTest2{
	
	public static double totalBalance(Account[] accounts){
		double total = 0;
		for(int i = 0; i < accounts.length; i++)
			total += accounts[i].getBalance();
		return total;
	}

	public static void payAnnualInterest(Account[] accounts){
		for(int i = 0; i < accounts.length; i++){
			if(accounts[i] instanceof Profitable){
				Profitable p = (Profitable) accounts[i];
				p.addInterest(1, 6);
			}
		}
	}
	
	public static void main(String[] args){
		Banker b = Banker.getBanker();
		Account[] bank = new Account[4];
		bank[0] = b.openAccount(5000);
		bank[1] = b.openAccount(4500, true);
		bank[2] = b.openAccount(4500, true);
		bank[3] = b.openAccount(5000);
		payAnnualInterest(bank);
		for(int i = 0; i < 4; i++)
			System.out.println(bank[i].getId() + "\t" + bank[i].getBalance());
		System.out.println("Total Balance = " + totalBalance(bank));
	}
}








