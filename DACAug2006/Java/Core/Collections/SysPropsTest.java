import java.util.*;

class SysPropsTest{
	
	public static String readLine(){
		try{
			String nl = System.getProperty("line.separator");
			char c = nl.charAt(0);
			char k;
			StringBuffer sb = new StringBuffer();
			while((k = (char) System.in.read()) != c)
				sb.append(k);
			if(nl.length() == 2) System.in.read();
			return sb.toString();
		}catch(Exception e){
			return null;
		}
	}

	public static void main(String[] args){
		if(args.length > 0 && args[0].equals("-all")){
			Properties props = System.getProperties();
			Enumeration e = props.keys();
			while(e.hasMoreElements()){
				String key = (String) e.nextElement();
				String value = props.getProperty(key);
				System.out.println(key + " = " + value);
			}
		}else{
			System.out.print("Enter Key : ");
			String key = readLine();
			System.out.println("Value = " + System.getProperty(key));
		}
	}
}










