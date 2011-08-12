package power;

public class Console{


	static{
		System.loadLibrary("natcon");
	}

	private native static char readNoEcho();

	public static String readPassword(){
		StringBuffer buf = new StringBuffer();
		char c;
		while((c = readNoEcho()) != '\r'){
			buf.append(c);
			System.out.print('*');
		}
		System.out.println();
		return buf.toString();
	}


	public static final int BLUE = 1;
	public static final int GREEN = 2;
	public static final int RED = 4;
	public static final int BRIGHT = 8;

	private native static void write(String text, int color);
	
	public static void writeLine(String text, int color){
		write(text, color);
		System.out.println();
	}

	public static ConsoleSize getSize(){
		return new ConsoleSize();
	}

}
