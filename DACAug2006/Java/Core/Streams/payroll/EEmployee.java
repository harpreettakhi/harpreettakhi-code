package payroll;

import java.io.*;

public class EEmployee implements Comparable, Externalizable{
			
	private int id;
	private short hours;
	private float rate;
	private static int count;
	
	public EEmployee(short h, float r){
		id = 101 + count++;
		hours = h;
		rate = r;
	}	

	public EEmployee(){
	}

	public EEmployee(int i, short h, float r){
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
		return id + "\t" + hours + "\t" + rate;
	}

	public int hashCode(){
		return id;
	}

	public boolean equals(Object other){
		if(other instanceof EEmployee){
			EEmployee that = (EEmployee) other;
			return this.id == that.id;
		}
		return false;
	}

	public void finalize(){
		System.out.println("-- EEmployee(" + id + ") reclaimed");
	}

	public int compareTo(Object other){
		EEmployee that = (EEmployee) other;
		return this.id - that.id;		
	}

	public void writeExternal(ObjectOutput out) throws IOException{
		out.writeInt(id);
		out.writeShort(hours);
		out.writeFloat(rate);
	}

	public void readExternal(ObjectInput in) throws IOException{
		id = in.readInt();
		hours = in.readShort();
		rate = in.readFloat();
	}
}














