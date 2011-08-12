import java.sql.*;

class OracleQueryTest{
	public static void main(String[] args) throws Exception{
		Driver d = new oracle.jdbc.driver.OracleDriver();
		Connection con = d.connect("jdbc:oracle:thin:@//192.168.4.29:1521/orcl9i", System.getProperties());
		//Connection con = d.connect("jdbc:oracle:oci8:@dacora", System.getProperties());
		//System.out.println(con.getClass());
		Statement stmt = con.createStatement();
		ResultSet rs = stmt.executeQuery("select pno, price, stock from products");
		while(rs.next())
			System.out.println(rs.getInt("pno") + "\t" + rs.getDouble("price") + "\t" + rs.getInt(3));
		rs.close();
		stmt.close();
		con.close();
	}
}
