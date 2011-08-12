package depository;

public class NoSuchSymbolException extends Exception{
	
	public NoSuchSymbolException(String symbol){
		super(symbol);
	}
}

