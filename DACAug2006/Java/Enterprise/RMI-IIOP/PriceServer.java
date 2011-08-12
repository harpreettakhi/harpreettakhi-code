import javax.naming.*;

class PriceServer{ 
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		PriceManagerImpl servant = new PriceManagerImpl();
		naming.rebind("shop", servant);
	}	
}