class NativeConsoleTest{

	public static void main(String[] args){
		String os = System.getProperty("os.name");
		if(os.startsWith("Windows"))
			NativeConsole.println("Hello JNI!", NativeConsole.BLUE | NativeConsole.BRIGHT);
		else
			System.out.println("Hello JNI!");
	}
}
