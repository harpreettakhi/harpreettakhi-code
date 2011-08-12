package finance;

public class HomeLoan implements LoanPolicy{

	public final float interestRate(double amount, int duration){
		return (duration < 10) ? 7 : 8;
	}
}