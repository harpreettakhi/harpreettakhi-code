import java.io.*;

class StreamTest2{

	public static void encrypt(InputStream source, OutputStream target, String key) throws IOException{
		byte[] buffer = new byte[key.length()];
		int n = 0;
		do{
			n = source.read(buffer, 0, buffer.length);
			for(int i = 0; i < n; i++)
				buffer[i] = (byte) (buffer[i] ^ key.charAt(i));
			target.write(buffer, 0, n);
		}while(n == buffer.length);
	}

	public static void main(String[] args){
		try{
			encrypt(System.in, System.out, args[0]);
		}catch(Exception e){
			System.out.println(e);
		}		
	}
}











