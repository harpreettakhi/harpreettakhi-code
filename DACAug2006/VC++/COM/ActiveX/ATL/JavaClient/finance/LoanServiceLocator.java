/**
 * LoanServiceLocator.java
 *
 * This file was auto-generated from WSDL
 * by the Apache Axis WSDL2Java emitter.
 */

package finance;

public class LoanServiceLocator extends org.apache.axis.client.Service implements finance.LoanService {

    // Use to get a proxy class for PersonalLoanSoapPort
    private final java.lang.String PersonalLoanSoapPort_address = "http://prithvi/atlcom/LoanService.ASP";

    public java.lang.String getPersonalLoanSoapPortAddress() {
        return PersonalLoanSoapPort_address;
    }

    // The WSDD service name defaults to the port name.
    private java.lang.String PersonalLoanSoapPortWSDDServiceName = "PersonalLoanSoapPort";

    public java.lang.String getPersonalLoanSoapPortWSDDServiceName() {
        return PersonalLoanSoapPortWSDDServiceName;
    }

    public void setPersonalLoanSoapPortWSDDServiceName(java.lang.String name) {
        PersonalLoanSoapPortWSDDServiceName = name;
    }

    public finance.PersonalLoanSoapPort getPersonalLoanSoapPort() throws javax.xml.rpc.ServiceException {
       java.net.URL endpoint;
        try {
            endpoint = new java.net.URL(PersonalLoanSoapPort_address);
        }
        catch (java.net.MalformedURLException e) {
            throw new javax.xml.rpc.ServiceException(e);
        }
        return getPersonalLoanSoapPort(endpoint);
    }

    public finance.PersonalLoanSoapPort getPersonalLoanSoapPort(java.net.URL portAddress) throws javax.xml.rpc.ServiceException {
        try {
            finance.PersonalLoanSoapBindingStub _stub = new finance.PersonalLoanSoapBindingStub(portAddress, this);
            _stub.setPortName(getPersonalLoanSoapPortWSDDServiceName());
            return _stub;
        }
        catch (org.apache.axis.AxisFault e) {
            return null;
        }
    }

    /**
     * For the given interface, get the stub implementation.
     * If this service has no port for the given interface,
     * then ServiceException is thrown.
     */
    public java.rmi.Remote getPort(Class serviceEndpointInterface) throws javax.xml.rpc.ServiceException {
        try {
            if (finance.PersonalLoanSoapPort.class.isAssignableFrom(serviceEndpointInterface)) {
                finance.PersonalLoanSoapBindingStub _stub = new finance.PersonalLoanSoapBindingStub(new java.net.URL(PersonalLoanSoapPort_address), this);
                _stub.setPortName(getPersonalLoanSoapPortWSDDServiceName());
                return _stub;
            }
        }
        catch (java.lang.Throwable t) {
            throw new javax.xml.rpc.ServiceException(t);
        }
        throw new javax.xml.rpc.ServiceException("There is no stub implementation for the interface:  " + (serviceEndpointInterface == null ? "null" : serviceEndpointInterface.getName()));
    }

    /**
     * For the given interface, get the stub implementation.
     * If this service has no port for the given interface,
     * then ServiceException is thrown.
     */
    public java.rmi.Remote getPort(javax.xml.namespace.QName portName, Class serviceEndpointInterface) throws javax.xml.rpc.ServiceException {
        if (portName == null) {
            return getPort(serviceEndpointInterface);
        }
        String inputPortName = portName.getLocalPart();
        if ("PersonalLoanSoapPort".equals(inputPortName)) {
            return getPersonalLoanSoapPort();
        }
        else  {
            java.rmi.Remote _stub = getPort(serviceEndpointInterface);
            ((org.apache.axis.client.Stub) _stub).setPortName(portName);
            return _stub;
        }
    }

    public javax.xml.namespace.QName getServiceName() {
        return new javax.xml.namespace.QName("http://prithvi/atlcom/LoanService/wsdl/", "LoanService");
    }

    private java.util.HashSet ports = null;

    public java.util.Iterator getPorts() {
        if (ports == null) {
            ports = new java.util.HashSet();
            ports.add(new javax.xml.namespace.QName("PersonalLoanSoapPort"));
        }
        return ports.iterator();
    }

}
