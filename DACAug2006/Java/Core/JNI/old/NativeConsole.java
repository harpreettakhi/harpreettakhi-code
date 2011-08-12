public class NativeConsole{

	static{
		System.loadLibrary("natcon");
	}

	public static final int BLUE = 1;
	public static final int GREEN = 2;
	public static final int RED = 4;
	public static final int BRIGHT = 8;

	public native static void print(String text, int color);

	public static void println(String text, int color){
		print(text + "\r\n", color);
	}
}










