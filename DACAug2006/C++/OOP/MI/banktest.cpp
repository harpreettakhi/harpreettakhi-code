#include "bank.h"
#include <iostream>

using namespace Banking;
using namespace std;

double TotalBalance(Account* accounts[], int count)
{
	double total = 0;
	for(int i = 0; i < count; i++)
		total += accounts[i]->Balance();
	return total;
}

void PayAnnualInterest(Account* accounts[], int count)
{
	for(int i = 0; i < count; i++)
	{
		Profitable* p = dynamic_cast<Profitable*>
					(accounts[i]);
		if(p) p->AddInterest(1, 6);
	}
}

Account* OpenAccount(double amount, bool savings)
{
	Account* acc;
	if(savings)
		acc = new SavingsAccount;
	else
		acc = new CurrentAccount;
	acc->Deposit(amount);
	return acc;
}

int main()
{
	Account* bank[] = {
					OpenAccount(4500, true),
					OpenAccount(5000, false),
					OpenAccount(5000, false),
					OpenAccount(4500, true),
				};
	PayAnnualInterest(bank, 4);
	double total = TotalBalance(bank, 4);
	for(int i = 0; i < 4; i++) 
	{
		cout << bank[i]->ID() << "\t"
			 << bank[i]->Balance() << "\t"
			 << typeid(*bank[i]).name() << endl;
		delete bank[i];
	}
	
	cout << "Total Balance : " << total << endl; 

}

















