import javax.naming.*;

class ListBindingsTest{
	
	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		NamingEnumeration e = naming.listBindings("");
		while(e.hasMore()){
			Binding pair = (Binding) e.next();
			if(pair.getClassName().equals("ContactInfo")){
				String name = pair.getName();
				ContactInfo info = (ContactInfo) pair.getObject();
				System.out.println(name + "\t" + info);
			}
		}
	}
}


