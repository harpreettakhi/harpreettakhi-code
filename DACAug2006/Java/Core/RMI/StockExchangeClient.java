import java.rmi.*;

class StockExchangeClient{

	public static void main(String[] args) throws Exception{
		StockExchange remote = (StockExchange) Naming.lookup("rmi://prithvi/stock");
		System.out.println(remote.getClass().getName());
		System.out.println("Number of symbols : " + remote.countSymbols());
		double price = remote.getPriceOf(args[0]);
		if(price >= 0)
			System.out.println("Price is " + price);
	}
}













