#include "bank.h"

namespace Banking
{
	void Account::Transfer(double amount, 
				Account* other) throw (InsufficientFunds)
	{
		if(other != this) 
		{
			this->Withdraw(amount);
			other->Deposit(amount);
		}
	}
	
	Account::~Account()
	{
	}
	
	BankAccount::BankAccount()
	{
		id = 1001 + count++;
		balance = 0;
	}
	
	int BankAccount::ID() const
	{
		return id;
	}

	double BankAccount::Balance() const
	{
		return balance;
	}
	
	void BankAccount::Deposit(double amount)
	{
		balance += amount;
	}

	int BankAccount::count = 0;	

	CurrentAccount::CurrentAccount()
	{
		
	}
	
	void CurrentAccount::Withdraw(double amount)
				throw (InsufficientFunds)
	{
		balance -= amount;
	}
	
	SavingsAccount::SavingsAccount()
	{
		balance = MinBalance;
	}

	void SavingsAccount::Withdraw(double amount)
				throw (InsufficientFunds)
	{
		if(balance - amount < MinBalance)
			throw InsufficientFunds();
		balance -= amount;
	}
	
	double SavingsAccount::AddInterest(int period, 
							float rate)
	{
		double interest = balance * period * rate / 100;
		balance += interest;
		return interest;
	}
	
	const double SavingsAccount::MinBalance = 500;
	
};












