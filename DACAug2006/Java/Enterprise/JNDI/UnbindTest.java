import javax.naming.*;

class UnbindTest{
	
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		naming.unbind(args[0]);
	}
}


