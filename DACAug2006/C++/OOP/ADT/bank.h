#ifndef BANK_H
#define BANK_H

namespace Banking
{
	class InsufficientFunds{};
	
	class Account
	{
	public:
		virtual int ID() const = 0;
		virtual double Balance() const = 0;
		virtual void Deposit(double amount) = 0;
		virtual void Withdraw(double amount) 
					throw (InsufficientFunds) = 0;
		void Transfer(double amount, Account* other)
					throw (InsufficientFunds); 
		virtual ~Account();
	};	
	
	/*
		type_info Account::typeid = {
							"Account", 
							{0}
						};
		int Account::vtbl[] = {
							&Account::typeid,
							0,
							0,
							0,
							0,
							&Account::~Account	
						};
	*/

	class BankAccount : public Account
	{
	public:
		BankAccount();
		int ID() const;
		double Balance() const;
		void Deposit(double amount);
	protected:
		int id;
		double balance;
	private:
		static int count;
	};

	/*
		type_info BankAccount::typeid = {
							"BankAccount", 
							{&Account::typeid, 0, 0}
						};
		int BankAccount::vtbl[] = {
							&BankAccount::typeid,
							&BankAccount::ID,
							&BankAccount::Balance,
							&BankAccount::Deposit,
							0,
							&BankAccount::~BankAccount	
						};
	*/

	class CurrentAccount : public BankAccount
	{
	public:
		CurrentAccount();
		void Withdraw(double amount) 
				throw(InsufficientFunds);		 
	};

	/*
		type_info CurrentAccount::typeid = {
							"CurrentAccount", 
							{&BankAccount::typeid, 0, 0}
						};
		int CurrentAccount::vtbl[] = {
						&CurrentAccount::typeid,
						&BankAccount::ID,
						&BankAccount::Balance,
						&BankAccount::Deposit,
						&CurrentAccount::Withdraw,
						&CurrentAccount::~CurrentAccount							};
	*/

	class SavingsAccount : public BankAccount
	{
	public:
		SavingsAccount();
		void Withdraw(double amount)
				throw (InsufficientFunds);
		virtual double AddInterest(int period, 
						float rate);
		static const double MinBalance;
	};

	/*
		type_info SavingsAccount::typeid = {
							"SavingsAccount", 
							{&BankAccount::typeid, 0, 0}
						};
		int SavingsAccount::vtbl[] = {
					&SavingsAccount::typeid,
					&BankAccount::ID,
					&BankAccount::Balance,
					&BankAccount::Deposit,
					&SavingsAccount::Withdraw,
					&SavingsAccount::~SavingsAccount,
					&SavingsAccount::AddInterest
						};
	*/

};

#endif














