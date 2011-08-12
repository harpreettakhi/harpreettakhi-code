import java.rmi.*;
import java.util.*;

public class StockExchangeImpl extends java.rmi.server.UnicastRemoteObject implements StockExchange{

	private String[] symbols = {"DELL", "IBM", "MSFT", "ORCL", "SUNW"};

	public StockExchangeImpl() throws RemoteException{
		super();  //Exports this object
	}

	public int countSymbols(){
		return symbols.length;
	}

	public double getPriceOf(String symbol){
		if(Arrays.binarySearch(symbols, symbol) < 0)
			return -1;
		return 90 * Math.random() + 10;
	}
}










