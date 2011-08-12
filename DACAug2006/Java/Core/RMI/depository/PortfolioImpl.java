package depository;

import java.rmi.*;
import java.util.*;

public class PortfolioImpl extends java.rmi.server.UnicastRemoteObject implements Portfolio{

	private static String[] symbols = {"DELL", "IBM", "MSFT", "ORCL", "SUNW"};
	private int[] stock = {0, 0, 0, 0, 0}; 

	public PortfolioImpl() throws RemoteException{}

	private static int find(String symbol) throws NoSuchSymbolException{
		int i = Arrays.binarySearch(symbols, symbol);
		if(i < 0) throw new NoSuchSymbolException(symbol);
		return i;
	}

	public int getStock(String symbol) throws NoSuchSymbolException{
		int i = find(symbol);
		return stock[i];
	}

	public synchronized void buy(String symbol, int shares) throws NoSuchSymbolException{
		int i = find(symbol);
		stock[i] += shares;		
	}

	public synchronized void sell(String symbol, int shares) throws NoSuchSymbolException, OutOfStockException{
		int i = find(symbol);
		if(stock[i] < shares) throw new OutOfStockException(symbol);
		stock[i] -= shares;
	}
}












