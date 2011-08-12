import java.rmi.*;

class StockExchangeServer{

	public static void main(String[] args) throws Exception{
		StockExchangeImpl servant = new StockExchangeImpl();
		Naming.rebind("stock", servant);
		System.out.println("StockExchange-Server ready...");
	}	
}

