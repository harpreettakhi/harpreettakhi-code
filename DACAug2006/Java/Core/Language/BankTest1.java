import banking.*;

class BankTest1{
	
	public static void main(String[] args){
		Banker b = Banker.getBanker();
		Account cust = b.openAccount(4500, true);
		Account vend = b.openAccount(2000);
		try{
			double amt = Double.parseDouble(args[0]);
			cust.transfer(amt, vend);
		}catch(InsufficientFundsException e){
			System.out.println("Transfer aborted due to lack of funds!");
		}catch(NumberFormatException e){
			System.out.println("Bad input!");
		}finally{
			System.out.println("Customer Account ID is " + cust.getId() + " and Balance is " + cust.getBalance());
		}
		System.out.println("Vendor Account ID is " + vend.getId() + " and Balance is " + vend.getBalance());	
	}
}