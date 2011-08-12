package sales;

import java.rmi.*;
import java.sql.*;

public class OrderManagerImpl extends java.rmi.server.UnicastRemoteObject implements OrderManager{

	private OrderMonitor monitor;

	public OrderManagerImpl() throws RemoteException{
		
	}
	
	private Connection connect() throws SQLException{
		try{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			return DriverManager.getConnection("jdbc:oracle:thin:@//srv-iit:1521/orcl91.sangam.met", "efaculty1", "efaculty1");			
		}catch(ClassNotFoundException e){
			throw new SQLException("Cannot load JDBC driver");
		}
	}
	
	public int placeOrder(String customer, int product, int quantity) throws SQLException{
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
			if(monitor != null){
				try{
					monitor.orderPlaced(ordno);
				}catch(RemoteException e){
					monitor = null;
				}
			}
			return ordno;
		}catch(SQLException e){
			con.rollback();
			throw e;
		}finally{
			con.close();
		}

	}

	public void setOrderMonitor(OrderMonitor om){
		monitor = om;
	}
	
}









