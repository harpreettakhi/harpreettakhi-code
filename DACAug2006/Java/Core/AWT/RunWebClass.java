import java.awt.*;
import java.net.*;
import java.security.*;


class RunWebClass{

	public static void main(String[] args) throws Exception{
		URL[] codebase = {new URL(args[0])};
		ClassLoader loader = new URLClassLoader(codebase){
			public PermissionCollection getPermissions(CodeSource source){
				PermissionCollection col = super.getPermissions(source);
				col.add(new RuntimePermission("exitVM"));
				return col;
			}
		};
		Class c = loader.loadClass(args[1]);
		System.setSecurityManager(new SecurityManager());
		Frame f = (Frame) c.newInstance();
		f.setVisible(true);
	}
}







