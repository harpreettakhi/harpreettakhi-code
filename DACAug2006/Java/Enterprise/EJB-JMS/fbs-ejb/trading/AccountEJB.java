package trading;

import javax.ejb.*;
import javax.sql.*;
import javax.naming.*;
import java.sql.*;
import java.util.*;
import java.util.logging.*;

public class AccountEJB implements EntityBean{

	private int id;
	private double balance;
	private double credit;

	private boolean modified;
	private EntityContext context;

	public int getId(){
		return id;
	}	

	public double getBalance(){
		return balance;
	}

	public void setBalance(double value){
		balance = value;
		modified = true;
	}

	public double getCredit(){
		return credit;
	}

	public void setCredit(double value){
		credit = value;
		modified = true;
	}

	public Integer ejbCreate() throws CreateException{
		try{
			Connection con = connect();
			try{
				Statement stmt = con.createStatement();
				stmt.executeUpdate("update counter set currentvalue=currentvalue+1 where id='account'");
				ResultSet rs  = stmt.executeQuery("select currentvalue from counter where id='account'");
				rs.next();			
				id = 1000 + rs.getInt(1);
				rs.close();
				stmt.close();
				PreparedStatement psm = con.prepareStatement("insert into account values(?, 0, 0)");
				psm.setInt(1, id);
				psm.executeUpdate();
				psm.close();
				balance = 0;
				credit = 0;
				return new Integer(id);	
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new CreateException(e.getMessage());
		}
	}

	public void ejbPostCreate(){}

	public Integer ejbFindByPrimaryKey(Integer key) throws FinderException{
		try{
			Connection con = connect();
			try{
				PreparedStatement psm = con.prepareStatement("select count(*) from account where id=?");
				psm.setInt(1, key.intValue());
				ResultSet rs = psm.executeQuery();
				rs.next();
				int n = rs.getInt(1);
				rs.close();
				psm.close();
				if(n == 0) throw new ObjectNotFoundException(key.toString());
				return key;
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new FinderException(e.getMessage());
		}
	}

	public Collection ejbFindAll() throws FinderException{
		try{
			Connection con = connect();
			try{
				ArrayList keys = new ArrayList();
				Statement stmt = con.createStatement();
				ResultSet rs = stmt.executeQuery("select id from account");
				while(rs.next())
					keys.add(rs.getObject(1));
				rs.close();
				stmt.close();
				return keys;
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new FinderException(e.getMessage());
		}
	}

	public double ejbHomeGetTotalBalance(){
		try{
			Connection con = connect();
			try{
				Statement stmt = con.createStatement();
				ResultSet rs = stmt.executeQuery("select sum(balance) from account");
				rs.next();
				double tot = rs.getDouble(1);
				rs.close();
				stmt.close();
				return tot;
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new EJBException(e);
		}		
	}

	public void setEntityContext(EntityContext ctx){
		context = ctx;
	}

	public void unsetEntityContext(){
		context = null;
	}
	
	public void ejbActivate(){}

	public void ejbPassivate(){}

	public void ejbLoad(){
		Integer key = (Integer) context.getPrimaryKey();
		id = key.intValue();
		try{
			Connection con = connect();
			try{
				PreparedStatement psm = con.prepareStatement("select balance, credit from account where id=?");
				psm.setInt(1, id);
				ResultSet rs = psm.executeQuery();
				rs.next();
				balance  = rs.getDouble(1);
				credit = rs.getDouble(2);
				modified = false;
				rs.close();
				psm.close();
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new EJBException(e);
		}		
		
	}

	public void ejbStore(){
		if(!modified) return;
		try{
			Connection con = connect();
			try{
				PreparedStatement psm = con.prepareStatement("update account set balance=?, credit=? where id=?");
				psm.setDouble(1, balance);
				psm.setDouble(2, credit);
				psm.setInt(3, id);
				psm.executeUpdate();
				psm.close();
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new EJBException(e);
		}		
	}

	public void ejbRemove() throws RemoveException{
		Integer key = (Integer) context.getPrimaryKey();
		id = key.intValue();
		try{
			Connection con = connect();
			try{
				PreparedStatement psm = con.prepareStatement("delete from account where id=?");
				psm.setInt(1, id);
				psm.executeUpdate();
				psm.close();
			}finally{
				con.close();
			}
		}catch(SQLException e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new RemoveException(e.getMessage());
		}		
	}

	private Connection connect(){
		try{
			Context naming = new InitialContext();
			DataSource ds = (DataSource) naming.lookup("java:comp/env/jdbc/FBSDB");
			return ds.getConnection();
		}catch(Exception e){
			Logger.global.log(Level.SEVERE, e.toString());
			throw new EJBException(e);
		}
	}
}












