import javax.naming.*;

class BindTest{
	
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		ContactInfo info = new ContactInfo(args[1], args[2], args[3]);
		naming.bind(args[0], info);
	}
}

