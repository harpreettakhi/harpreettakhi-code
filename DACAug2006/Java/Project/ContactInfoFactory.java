import javax.naming.*;

public class ContactInfoFactory implements javax.naming.spi.ObjectFactory{
	
	public Object getObjectInstance(Object data, Name name, Context context, java.util.Hashtable env){
		Reference ref = (Reference) data;
		String phone = (String) ref.get("_phone").getContent();
		String city = (String) ref.get("_city").getContent();
		String country = (String) ref.get("_country").getContent();
		return new ContactInfo(phone, city, country);
	}
}


