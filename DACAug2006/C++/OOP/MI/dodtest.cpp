#include <iostream>

using namespace std;

class TaxPayer
{
public:
	TaxPayer()
	{
		pin = 101 + count++;
	}

	virtual double Income() const = 0;
	
	int PIN() const
	{
		return pin;
	}
	
	double Tax() const
	{
		double i = Income();
		return (i < 10000) ? 0 : 0.2 * i;
	}

	virtual ~TaxPayer(){}

private:
	int pin;
	static int count;

};

int TaxPayer::count = 0;

void Print(const char* name, const TaxPayer* tp)
{
	cout << name << " : P.I.N = " << tp->PIN()
		 << " and Tax = " << tp->Tax() << endl; 
}

class Employee : public TaxPayer
{
public:
	Employee(int d) : TaxPayer(), days(d){}
	
	virtual float Wages() const
	{
		return (days < 24) ? 300 : 400;
	}
	
	double Income() const
	{
		return days * Wages();
	}

private:
	int days;
};

class Dealer : public TaxPayer
{
public:
	Dealer(double s) : TaxPayer(), sales(s){}
	
	virtual float Commission() const
	{
		return (sales < 50000) ? 3 : 5;
	}
	
	double Income() const
	{
		return sales * Commission() / 100;
	}
	
private:
	double sales;
};

class Salesman : public Employee, public Dealer
{
public:
	Salesman(int d, double s) : Employee(d), Dealer(s){}
	
	float Wages() const
	{
		return 250;
	} 

	float Commission() const
	{
		return 2;
	}

	double Income() const
	{
		return Employee::Income() + Dealer::Income();
	}
};

int main()
{
	Employee* jane = new Employee(28);
	Salesman* jack = new Salesman(30, 500000);
	Dealer* john = new Dealer(800000);
	Print("Employee Jane", jane);
	Print("Salesman Jack", 
		reinterpret_cast<TaxPayer*>(jack));
	Print("Dealer John", john);
	delete john;
	delete jack;
	delete jane;	
}











