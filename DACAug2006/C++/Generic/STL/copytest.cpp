#include "customer.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iterator>

using namespace std;

int main()
{
	typedef vector<Customer> Shop;
	
	Shop store;
	store.push_back(Customer(403, 5000));
	store.push_back(Customer(405, 3000));
	store.push_back(Customer(404, 4000));
	store.push_back(Customer(402, 7000));
	store.push_back(Customer(401, 6000));
	
	ofstream fout("shop.txt");
	if(!fout)
	{
		cerr << "Cannot open shop.txt" << endl;
		return 1;
	}
	fout << store.size() << endl;
	copy(store.begin(), store.end(), 
			ostream_iterator<Customer>(fout, "\n"));	
}












