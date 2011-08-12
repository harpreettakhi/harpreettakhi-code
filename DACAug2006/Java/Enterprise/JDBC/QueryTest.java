import java.io.*;
import java.sql.*;
import java.util.*;

class QueryTest{
	
	private static Connection connect() throws Exception{
		InputStream in = QueryTest.class.getResourceAsStream("jdbc.properties");
		Properties props = new Properties();
		props.load(in);
		in.close();
		String driver = props.getProperty("jdbc.driver");
		String url = props.getProperty("jdbc.url");
		String user = props.getProperty("jdbc.user");
		String pwd = props.getProperty("jdbc.password");
		Class.forName(driver);
		return DriverManager.getConnection(url, user, pwd);
	}
	
	public static void main(String[] args) throws Exception{
		Connection con = connect();
		Statement stmt = con.createStatement();
		ResultSet rs = stmt.executeQuery("select pno, price, stock from products");
		while(rs.next())
			System.out.println(rs.getInt("pno") + "\t" + rs.getDouble("price") + "\t" + rs.getInt(3));
		rs.close();
		stmt.close();
		con.close();
	}
}



