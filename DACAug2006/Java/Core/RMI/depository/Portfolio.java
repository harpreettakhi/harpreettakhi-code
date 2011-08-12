package depository;

import java.rmi.*;

public interface Portfolio extends Remote{

	int getStock(String symbol) throws NoSuchSymbolException, RemoteException;
	void buy(String symbol, int shares) throws NoSuchSymbolException, RemoteException;
	void sell(String symbol, int shares) throws NoSuchSymbolException, OutOfStockException, RemoteException;
}

