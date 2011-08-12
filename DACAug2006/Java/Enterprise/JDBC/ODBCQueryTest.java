import java.sql.*;

class ODBCQueryTest{
	public static void main(String[] args) throws Exception{
		Driver d = new sun.jdbc.odbc.JdbcOdbcDriver();
		Connection con = d.connect("jdbc:odbc:Driver={Microsoft Access Driver (*.mdb)};DBQ=db\\sales.mdb", System.getProperties());
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
