package wwwtrade;

import trading.*;
import javax.servlet.jsp.*;
import javax.servlet.jsp.tagext.*;
import javax.naming.*;
import java.util.*;

public class GetCompanyTag extends TagSupport{

	private Iterator cursor;
	
	public int doStartTag() throws JspException{
		try{
			Context naming = new InitialContext();
			CompanyLocalHome home = (CompanyLocalHome) naming.lookup("java:comp/env/ejb/Company");
			Collection col = home.findAll();
			cursor = col.iterator();
			return putNextCompany() ? EVAL_BODY_INCLUDE : SKIP_BODY;
		}catch(Exception e){
			throw new JspException(e.toString());
		}
	}

	public int doAfterBody() throws JspException{
		try{
			return putNextCompany() ? EVAL_BODY_AGAIN : SKIP_BODY;
		}catch(Exception e){
			throw new JspException(e.toString());
		}
	}

	private boolean putNextCompany() throws Exception{
		if(cursor.hasNext()){
			pageContext.setAttribute(id, cursor.next());
			return true;
		}
		return false;
	}
}











