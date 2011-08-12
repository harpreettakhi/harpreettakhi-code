import javax.naming.*;

class RebindTest{
	
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		ContactInfo info = (ContactInfo) naming.lookup(args[0]);
		info.setPhone(args[1]);
		naming.rebind(args[0], info);
	}
}


