package finance;

public class EducationLoan implements LoanPolicy{

	public final float interestRate(double amount, int duration){
		return 6.5f;
	}
}