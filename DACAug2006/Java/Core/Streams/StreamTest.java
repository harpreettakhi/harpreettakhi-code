import java.io.*;

class StreamTest{

	public static void encrypt(InputStream source, OutputStream target, String key) throws IOException{
		byte[] buffer = new byte[key.length()];
		while(source.available() > 0){
			int n = source.read(buffer, 0, buffer.length);
			for(int i = 0; i < n; i++)
				buffer[i] = (byte) (buffer[i] ^ key.charAt(i));
			target.write(buffer, 0, n);
		}
	}

	public static void main(String[] args){
		try{
			System.out.println("Opening " + args[0] + " for input");
			FileInputStream fin = new FileInputStream(args[0]);
			System.out.println("Success");
			System.out.println("Opening " + args[1] + " for output");			
			FileOutputStream fout = new FileOutputStream(args[1]);
			System.out.println("Success");
			encrypt(fin, fout, args[2]);
			fout.close();
			fin.close();
		}catch(Exception e){
			System.out.println(e);
		}		
	}
}











