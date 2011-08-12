import java.rmi.*;

public interface StockExchange extends Remote{

	int countSymbols() throws RemoteException;
	double getPriceOf(String symbol) throws RemoteException;
}
