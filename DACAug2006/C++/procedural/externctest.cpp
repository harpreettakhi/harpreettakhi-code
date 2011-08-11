#include <iostream>

using namespace std;

extern "C"{
	 int GCD(int, int);
 	 int LCM(int, int);
}

int GCD(int l, int m, int n)
{
	return GCD(l, GCD(m, n));
}

int main()
{
	int p, q;
	cout << "Enter two positive integers : ";
	cin >> p >> q;
	cout << "G.C.D = " << GCD(p, q) << endl;
	cout << "L.C.M = " << LCM(p, q) << endl; 	
	cout << GCD(21, 28, 35) << endl;
}









