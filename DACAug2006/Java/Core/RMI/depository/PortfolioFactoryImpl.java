package depository;

import java.rmi.*;
import java.util.*;

public class PortfolioFactoryImpl extends java.rmi.server.UnicastRemoteObject implements PortfolioFactory{

	private Map store = new TreeMap();

	public PortfolioFactoryImpl() throws RemoteException{}
	
	public synchronized Portfolio open(String name) throws RemoteException{
		Portfolio pf = (Portfolio) store.get(name);
		if(pf == null){
			pf = new PortfolioImpl();
			store.put(name, pf);
		}
		return pf;
	}
}














