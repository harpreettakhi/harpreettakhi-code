import java.util.*;
import javax.naming.*;

class MakeRootDir{
	
	public static void main(String[] args) throws Exception{
		Properties env = new Properties();
		env.put("java.naming.factory.initial", "com.sun.jndi.ldap.LdapCtxFactory");
		env.put("java.naming.provider.url", "ldap://192.168.4.29:389/dc=dachome");
		env.put("java.naming.security.principal", "uid=student,dc=dachome");
		env.put("java.naming.security.credentials", "student");
		Context naming = new InitialContext(env);
		naming.createSubcontext(args[0]);
	}
}

