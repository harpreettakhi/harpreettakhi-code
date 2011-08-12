import java.sql.*;

class UpdateTest{
	public static void main(String[] args) throws Exception{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection con = DriverManager.getConnection("jdbc:oracle:thin:@//srv-iit:1521/orcl91.sangam.met", "efaculty1", "efaculty1");
		String sql = "update products set price=0.95*price";
		if(args.length > 0) sql += " where pno=" + args[0];
		Statement stmt = con.createStatement();
		int n = stmt.executeUpdate(sql);
		stmt.close();
		con.close();
		System.out.println(n + " product/s updated");
	}
}
