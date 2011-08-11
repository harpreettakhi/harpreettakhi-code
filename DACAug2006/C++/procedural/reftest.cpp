#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

double Mean(const double& a, const double& b,
			 double& gm)
{
	gm = sqrt(a * b);
	return (a + b) / 2;
}

ostream& Now(ostream& out)
{
	time_t t;
	time(&t);
	out << ctime(&t);
	return out;
}

int main()
{
	double x, y, g;
	cout << "Enter two numbers : ";
	cin >> x >> y;
	double m = Mean(x, y, g);
	cout << "Arithmatic Mean : " << m << endl;
	cout << "Geometric Mean : " << g << endl;
	double z = Mean(3.14, 19.7, g);
	cout << "z = " << z << endl;
	//cout << Mean << endl;
	cout << Now << endl;
}












