import finance.*;

class LoanServiceClient{
	
	public static void main(String[] args) throws Exception{
		double amount = Double.parseDouble(args[0]);
		int period = Integer.parseInt(args[1]);
		LoanServiceLocator locator = new LoanServiceLocator();
		PersonalLoanSoapPort port = locator.getPersonalLoanSoapPort();
		try{
			System.out.println("E.M.I : " + port.getMonthlyInstallment(amount, period));
		}catch(Exception e){
			System.out.println(e.getMessage());	
		}
	}
}





