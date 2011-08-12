package depository;

import java.rmi.*;

public interface PortfolioFactory extends Remote{

	Portfolio open(String name) throws RemoteException;
}

