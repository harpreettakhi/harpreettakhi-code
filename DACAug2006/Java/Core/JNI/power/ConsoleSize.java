package power;

public class ConsoleSize{

	private short width;
	private short height;

	ConsoleSize(){
		initialize();
	}

	private native void initialize();

	public final short getWidth(){
		return width;
	}

	public final short getHeight(){
		return height;
	}
}
