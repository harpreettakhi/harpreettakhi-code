package payroll;

import java.io.*;

public class SEmployee implements Comparable, Serializable{

	static final long serialVersionUID = -9039781529838368140L;
			
	private int id;
	private short hours;
	private float rate;
	private transient String password;
	private static int count;
	
	public SEmployee(short h, float r){
		id = 101 + count++;
		hours = h;
		rate = r;
		password = "";
	}	

	public SEmployee(int i, short h, float r){
		this(h, r);
		id = i;
	}
	
	public final int getId(){
		return id;
	}
	
	public final short getHours(){
		return hours;
	}

	public final void setHours(short value){
		hours = value;
	}

	public final float getRate(){
		return rate;
	}

	public final void setRate(float value){
		rate = value;
	}

	public final String getPassword(){
		return password;
	}

	public boolean checkPassword(String value){
		return password.equals(value);
	}

	public final void setPassword(String value){
		password = value;
	}

	public double getNetIncome(){
		double income = hours * rate;
		int ot = hours - 180;
		if(ot > 0)
			income += 0.5 * ot * rate;
		return income;		
	}
	
	public static int countEmployees(){
		return count;	
	}

	public String toString(){
		return id + "\t" + hours + "\t" + rate + "\t" + password;
	}

	public int hashCode(){
		return id;
	}

	public boolean equals(Object other){
		if(other instanceof SEmployee){
			SEmployee that = (SEmployee) other;
			return this.id == that.id;
		}
		return false;
	}

	public void finalize(){
		System.out.println("-- SEmployee(" + id + ") reclaimed");
	}

	public int compareTo(Object other){
		SEmployee that = (SEmployee) other;
		return this.id - that.id;		
	}

	private void writeObject(ObjectOutputStream out) throws Exception{
		out.writeInt(password.length());
		byte[] pwd = password.getBytes();
		encode(pwd);
		out.write(pwd);
		out.defaultWriteObject();
	}

	private void readObject(ObjectInputStream in) throws Exception{
		int size = in.readInt();
		byte[] data = new byte[size];
		in.read(data);
		encode(data);
		password = new String(data);
		in.defaultReadObject();
	}

	private void encode(byte[] data){
		for(int i = 0; i < data.length; i++)
			data[i] = (byte) (data[i] ^ '#');	
	}
}















