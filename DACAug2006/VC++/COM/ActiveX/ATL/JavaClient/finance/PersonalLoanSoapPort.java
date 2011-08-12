/**
 * PersonalLoanSoapPort.java
 *
 * This file was auto-generated from WSDL
 * by the Apache Axis WSDL2Java emitter.
 */

package finance;

public interface PersonalLoanSoapPort extends java.rmi.Remote {
    public float getInterestRate(double amount, int period) throws java.rmi.RemoteException;
    public double getMonthlyInstallment(double amount, int period) throws java.rmi.RemoteException;
}
