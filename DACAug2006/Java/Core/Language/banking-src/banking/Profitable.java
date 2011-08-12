package banking;

public interface Profitable{
	
	/**
	Adds interest to this account
	@param period duration for which interest must be added
	@param rate rate of annual interest in percentage
	@return the interest added
	*/
	double addInterest(int period, float rate);
	
}