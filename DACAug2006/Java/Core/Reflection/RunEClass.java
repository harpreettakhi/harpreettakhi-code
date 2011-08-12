import java.io.*;
import java.lang.reflect.*;

class EClassLoader extends ClassLoader{

	private String password;
	
	public EClassLoader(String pwd){
		password = pwd;
	}

	protected Class findClass(String name) throws ClassNotFoundException{
		String file = name + ".eclass";
		try{
			FileInputStream in = new FileInputStream(file);
			ByteArrayOutputStream out = new ByteArrayOutputStream();
			Encryptor.encrypt(in, out, password);
			in.close();
			byte[] code = out.toByteArray();
			return defineClass(name, code, 0, code.length);
		}catch(IOException e){
			throw new ClassNotFoundException(name);
		}catch(ClassFormatError e){
			throw new ClassNotFoundException("Invalid password");
		}
	}	
}

class RECSecurityManager extends SecurityManager{
	
	public void checkPropertyAccess(String key){
	}
}

class RunEClass{

	public static void main(String[] args) throws Exception{
		String[] argv = new String[args.length - 2];
		System.arraycopy(args, 2, argv, 0, argv.length);
		ClassLoader loader = new EClassLoader(args[1]);
		Class c = loader.loadClass(args[0]);
		Class[] signature = {String[].class};
		Method entry = c.getMethod("main", signature);
		Object[] arguments = {argv};
		System.setSecurityManager(new RECSecurityManager());
		try{
			entry.invoke(null, arguments);
		}catch(InvocationTargetException e){
			System.out.println(e.getTargetException());
		}
	}
}












