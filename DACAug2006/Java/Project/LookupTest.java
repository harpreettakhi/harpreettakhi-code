import javax.naming.*;

class LookupTest{
	
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		ContactInfo info = (ContactInfo) naming.lookup(args[0]);
		System.out.println(info);
	}
}


