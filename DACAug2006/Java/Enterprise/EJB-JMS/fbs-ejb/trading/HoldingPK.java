package trading;

public class HoldingPK implements java.io.Serializable{

	public int accountId;
	public String companyId;

	public HoldingPK(int accid, String compid){
		accountId = accid;
		companyId = compid;
	}

	public HoldingPK(){}

	public int hashCode(){
		String temp = accountId + "" + companyId;
		return temp.hashCode();
	}

	public boolean equals(Object other){
		if(other instanceof HoldingPK){
			HoldingPK that = (HoldingPK) other;
			return (accountId == that.accountId) && (companyId.equals(that.companyId));
		}
		return false;
	}
}










