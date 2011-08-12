package depository;

public class OutOfStockException extends Exception{
	
	public OutOfStockException(String symbol){
		super(symbol);
	}
}

