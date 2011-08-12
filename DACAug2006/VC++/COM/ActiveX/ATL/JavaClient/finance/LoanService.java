/**
 * LoanService.java
 *
 * This file was auto-generated from WSDL
 * by the Apache Axis WSDL2Java emitter.
 */

package finance;

public interface LoanService extends javax.xml.rpc.Service {
    public java.lang.String getPersonalLoanSoapPortAddress();

    public finance.PersonalLoanSoapPort getPersonalLoanSoapPort() throws javax.xml.rpc.ServiceException;

    public finance.PersonalLoanSoapPort getPersonalLoanSoapPort(java.net.URL portAddress) throws javax.xml.rpc.ServiceException;
}
