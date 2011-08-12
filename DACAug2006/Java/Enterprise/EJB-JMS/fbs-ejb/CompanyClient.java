import trading.*;
import javax.rmi.*;
import javax.naming.*;
import java.util.*;

class CompanyClient{

	public static void main(String[] args) throws Exception{
		Context naming = new InitialContext();
		Object ref = naming.lookup("java:comp/env/ejb/CompanyBean");
		CompanyHome home = (CompanyHome) PortableRemoteObject.narrow(ref, CompanyHome.class);
		if(args[0].equals("create")){
			Company comp = home.create(args[1], Double.parseDouble(args[2]), Integer.parseInt(args[3]));
			System.out.println("Company created");
		}else if(args[0].equals("find")){
			Company comp = home.findByPrimaryKey(args[1]);
			System.out.println("Share price : " + comp.getPrice());
		}else if(args[0].equals("list")){
			Collection col;
			if(args.length < 3)
				col = home.findAll();
			else
				col = home.findInPriceRange(Double.parseDouble(args[1]), Double.parseDouble(args[2]));
			for(Iterator i = col.iterator(); i.hasNext();){
				Company comp = (Company) i.next();
				CompanyInfo info = comp.getInfo();
				System.out.println(info.id + "\t" + info.price + "\t" + info.stock);
			}
		}else if(args[0].equals("average")){
			System.out.println("Average price : " + home.getAveragePrice());
		}
	}
}






