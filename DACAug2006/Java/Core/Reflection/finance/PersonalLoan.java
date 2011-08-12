package finance;

public class PersonalLoan implements LoanPolicy{ 

	public final float interestRate(double amount, int duration){
		return (amount < 100000) ? 8.5f : 9.5f;
	}
}