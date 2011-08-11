#include "customer.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class HasCode
{
public:
	HasCode(int c) : code(c){}
	
	bool operator()(const Customer& cust) const
	{
		return code == cust.Code();
	}

private:
	int code;
};

int main()
{
	typedef vector<Customer> Shop;
	int n;
	ifstream fin("shop.txt");
	if(!fin)
	{
		cerr << "Cannot open shop.txt" << endl;
		return 1;
	}
	
	fin >> n;
	Shop store(n);
	copy(istream_iterator<Customer>(fin), 
		 istream_iterator<Customer>(), store.begin());
	// copy(store.begin(), store.end(), 
	//	 ostream_iterator<Customer>(cout, "\n"));
	int code;
	cout << "Enter Code : ";
	cin >> code;
	Shop::iterator i = find_if(store.begin(), store.end(),
							HasCode(code));
	if(i != store.end())
		cout << "Credit : " << i->Credit() << endl;
	else
		cout << "No such customer" << endl;
}















