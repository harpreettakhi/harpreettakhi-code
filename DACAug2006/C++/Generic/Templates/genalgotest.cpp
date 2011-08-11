#include "genalgo.h"
#include <iostream>
#include <string>

using namespace std;

bool IsOdd(int value)
{
	return value & 1;
}

bool GreaterThan5(int value)
{
	return value > 5;
}

class IsBetween
{
public:
	IsBetween(int l, int h) : low(l), high(h){}
	
	bool operator()(int value) const 
	{
		return (value > low) && (value < high);
	}

private:
	int low, high;
};

int main()
{
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Write(num, num + 6);
	WriteIf(num, num + 10, IsOdd);
	WriteIf(num, num + 10, GreaterThan5);
	WriteIf(num, num + 10, IsBetween(3, 8));
	double values[] = {1.31, 5.27, 3.42, 6.55, 2.93};
	Write(values, values + 5);
	double* mx = FindMax(values, values + 5);
	cout << "Max = " << *mx << endl;
	double k;
	cout << "Enter value : ";
	cin >> k;
	double* i = Search(values, values + 5, k);
	if(i != values + 5)
		 cout << "Value found at index " 
			  << (i - values) << endl; 
	cout << "Middle value : " 
		 << Middle(values, values + 5) << endl;
}











