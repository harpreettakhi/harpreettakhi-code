#include "bank.h"
#include <iostream>

using namespace Banking;
using namespace std;

int main()
{
	Account* cust = new SavingsAccount;
	cust->Deposit(9500);
	Account* vend = new CurrentAccount;
	double amt;
	cout << "Enter amount to transfer : ";
	cin >> amt;
	try
	{
		cust->Transfer(amt, vend);
	}
	catch(InsufficientFunds)
	{
		cout << "Transfer aborted due to lack of funds"
			 << endl;
	}
	cout << "Customer's Account ID is " << cust->ID()
		 << " and Balance is " << cust->Balance()
		 << endl;
	cout << "Vendor's Account ID is " << vend->ID()
		 << " and Balance is " << vend->Balance()
		 << endl;
	
}









