#include "customer.h"
#include <iostream>
#include <vector>

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
	for(Shop::iterator i = store.begin();
			i != store.end(); ++i)
		cout << *i << endl;
	cout << "Third Customer's Credit : " 
		 << store[2].Credit() << endl;
}






