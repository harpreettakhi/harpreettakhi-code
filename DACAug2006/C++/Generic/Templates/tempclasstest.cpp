#include <iostream>

using namespace std;

template<typename Policy>
class Annuity
{
public:
	Annuity(double e, int n) : installment(e), duration(n)
	{
	}
	
	double Installment() const 
	{
			return installment;
	}
	
	int Duration() const
	{
		return duration;
	}

	double CashValue() const
	{
		float rate = Policy::Interest(installment, 
						duration);
		int m = 12 * duration;
		double amount = 0;
		for(int i = 0; i < m; i++)
			amount = installment + 
						amount * (1 + rate / 1200);
		return amount;
	}	

private:
	double installment;
	int duration;
};

class Pension
{
public:
	static float Interest(double p, int n)
	{
		return (n < 10) ? 6 : 7;
	}
};

class Insurance
{
public:
	static float Interest(double p, int n)
	{
		return (p < 2000) ? 7 : 8;
	}
};

class Postal
{
public:
	static float Interest(double p)
	{
		return 5.5f;
	}
};

template<>
class Annuity<Postal>
{
public:
	Annuity(double e) : installment(e){}

	double Installment() const
	{
		return installment;
	}
	
	double CashValue() const
	{
		float rate = Postal::Interest(installment);
		return 60 * installment * (1 + rate / 100);	
	}

private:
	double installment;
};


template<typename P>
ostream& operator<<(ostream& out, const Annuity<P>& a)
{
	return out << a.Installment() << '\t' 
			   << a.Duration();
}

template<>
ostream& operator<<(ostream& out,
				 const Annuity<Postal>& a)
{
	return out << a.Installment() << '\t' 
			   << 5;
}


int main()
{
	double emi;
	int years;
	
	cout << "Enter Installment : ";
	cin >> emi;
	cout << "Enter Duration : ";
	cin >> years;
	
	Annuity<Pension> pa(emi, years);
	cout << "Cash Value for Pension Policy : " 
		 << pa.CashValue() << endl;
	Annuity<Insurance> ia(emi, years);
	cout << "Cash Value for Insurance Policy : " 
		 << ia.CashValue() << endl;
	cout << pa << endl;
	cout << ia << endl;
	if(years == 5)
	{
		Annuity<Postal> xa(emi);
		cout << "Cash Value for Postal Policy : " 
			 << xa.CashValue() << endl;
		cout << xa << endl;
	}
}




















