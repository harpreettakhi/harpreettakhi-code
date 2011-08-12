package finance;

public class BusinessLoan{

	public final float interestRate(double amount, int duration){
		float rate = (amount < 1000000) ? 10 : 11;
		if(duration >= 5) rate += 1;
		return rate;
	}
}


