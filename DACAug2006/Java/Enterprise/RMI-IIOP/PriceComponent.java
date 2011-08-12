import java.sql.*;

public class PriceComponent{
	
	public double getUnitPrice(int product){
		try{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@//srv-iit:1521/orcl91.sangam.met", "efaculty1", "efaculty1");
			try{
				PreparedStatement psm = con.prepareStatement("select 1.05*price from products where pno=?");
				psm.setInt(1, product);
				ResultSet rs = psm.executeQuery();
				double price = rs.next() ? rs.getDouble(1) : -1;
				rs.close();
				psm.close();
				return price;
			}finally{
				con.close();
			}
		}catch(Exception e){
			throw new RuntimeException(e);
		}
	}
	
	public float getBulkDiscount(int quantity){
		if(quantity < 10) return 0;
		if(quantity < 50) return 5;
		return 7.5f;
	}

	
}






