import java.sql.*;

class StoredProcTest{
	public static void main(String[] args) throws Exception{
		String customer = args[0];
		int product = Integer.parseInt(args[1]);
		int quantity = Integer.parseInt(args[2]);
						
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection con = DriverManager.getConnection("jdbc:oracle:thin:@//192.168.4.29:1521/orcl9i", "efaculty1", "efaculty1");
		try{
			CallableStatement csm = con.prepareCall("{call place_order(?,?,?,?)}");
			csm.setString(1, customer);
			csm.setInt(2, product);
			csm.setInt(3, quantity);
			csm.registerOutParameter(4, Types.INTEGER);
			csm.execute();
			System.out.println("Order Number : " + csm.getInt(4));
			csm.close();
		}catch(Exception e){
			System.out.println("Order Failed : " + e.getMessage());
		}
		con.close();
	}
}















