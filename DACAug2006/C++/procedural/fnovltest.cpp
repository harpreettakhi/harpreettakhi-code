#include <iostream>
#include <cmath>

using namespace std;

double EMI(double loan, int period, float rate)
{
	int m = 12 * period;
	float i = rate / 1200;
	return loan * i / (1 - pow(1 + i, -m));
}

double EMI(double loan, int period)
{
	float r = (period <= 3) ? 8 : 9;
	return EMI(loan, period, r);
}

int main()
{
	double p = 10000;
	int n = 1;
	
	cout << "Enter Amount : ";
	cin >> p;
	if(!cin)
	{
		cout << "Bad input, assuming default amount"
			 << endl;
		cin.clear(); 
	}
	cin.ignore(256, '\n');
	cout << "Enter Duration : ";
	cin >> n;
	
	cout << "Amount : " << p << endl;
	cout << "Duration : " << n << endl;
	cout << "E.M.I for Personal Loan : "
		 << EMI(p, n) << endl;
	cout << "E.M.I for Educational Loan : "
		 << EMI(p, n, 7) << endl;
	
}













