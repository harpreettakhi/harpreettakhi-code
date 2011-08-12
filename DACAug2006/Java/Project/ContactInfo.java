import javax.naming.*;

public class ContactInfo implements Referenceable{
	
	private String phone;
	private String city;
	private String country;

	public ContactInfo(String phone, String city, String country){
		this.phone = phone;
		this.city = city;
		this.country = country;
	}

	public ContactInfo(){}

	public final String getPhone(){
		return phone;
	}

	public final void setPhone(String value){
		phone = value;
	}

	public final String getCity(){
		return city;
	}

	public final void setCity(String value){
		city = value;
	}

	public final String getCountry(){
		return country;
	}

	public final void setCountry(String value){
		country = value;
	}

	public String toString(){
		return phone + "\t" + city + "\t" + country;
	}

	public Reference getReference(){
		Reference ref = new Reference("ContactInfo", "ContactInfoFactory", null);
		ref.add(new StringRefAddr("_phone", phone));
		ref.add(new StringRefAddr("_city", city));		
		ref.add(new StringRefAddr("_country", country));
		return ref;
	}

}





