import java.sql.*;

class ParamSQLTest{
	public static void main(String[] args) throws Exception{
		String customer = args[0];
		int product = Integer.parseInt(args[1]);
		int quantity = Integer.parseInt(args[2]);
		Date today = new Date(System.currentTimeMillis());
		
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection con = DriverManager.getConnection("jdbc:oracle:thin:@//srv-iit:1521/orcl91.sangam.met", "efaculty1", "efaculty1");
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
			System.out.println("Order Number : " + ordno);
			psm.close();
		}catch(Exception e){
			con.rollback();
			System.out.println("Order Failed : " + e.getMessage());
		}
		con.close();
	}
}















