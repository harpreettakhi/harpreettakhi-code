package sales;

import java.sql.*;
import oracle.jdbc.pool.*;

public class CustomerBean implements java.io.Serializable{
	
	private static OracleDataSource ods;
	
	private String customer;	
	private int product;
	private int quantity;
	
	public final String getCustomer(){
		return customer;
	}

	public final int getProduct(){
		return product;
	}

	public final void setProduct(int value){
		product = value;
	}
	
	public final int getQuantity(){
		return quantity;
	}

	public final void setQuantity(int value){
		quantity = value;
	}

	public final boolean isAuthorized(){
		return customer != null;
	}

	public static Connection connect() throws SQLException{
		if(ods == null){
			ods = new OracleDataSource();
			ods.setURL("jdbc:oracle:thin:@//srv-iit:1521/orcl91.sangam.met");
			ods.setUser("efaculty1");
			ods.setPassword("efaculty1");
		}
		return ods.getConnection();
	}

	public void authorize(String custid, String pwd) throws SQLException{
		Connection con = connect();
		try{
			PreparedStatement psm = con.prepareStatement("select count(*) from customers where cust_id=? and pwd=?");
			psm.setString(1, custid);
			psm.setString(2, pwd);
			ResultSet rs = psm.executeQuery();
			rs.next();
			int n = rs.getInt(1);
			rs.close();
			psm.close();
			customer = (n == 1) ? custid : null;
		}finally{
			con.close();
		}
	}

	public int placeOrder() throws SQLException{
		Date today = new Date(System.currentTimeMillis());
		Connection con = connect();
		con.setAutoCommit(false);
		try{
			Statement sm = con.createStatement();
			sm.executeUpdate("update ord_ctl set ord_no=ord_no+1");
			ResultSet rs = sm.executeQuery("select ord_no from ord_ctl");
			rs.next();
			int ordno = rs.getInt(1);
			rs.close();
			sm.close();
			PreparedStatement psm = con.prepareStatement("insert into orders values(?,?,?,?,?)");
			psm.setInt(1, ordno);
			psm.setDate(2, today);
			psm.setString(3, customer);			
			psm.setInt(4, product);
			psm.setInt(5, quantity);
			psm.executeUpdate();		
			con.commit();
			psm.close();
			return ordno;
		}catch(SQLException e){
			con.rollback();
			throw e;
		}finally{
			con.close();
		}
		
	}

}




















