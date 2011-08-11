#include "customer.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	typedef list<Customer> Shop;
	
	Shop store;
	store.push_back(Customer(403, 5000));
	store.push_back(Customer(405, 3000));
	store.push_back(Customer(404, 4000));
	store.push_back(Customer(402, 7000));
	store.push_front(Customer(401, 6000));
	for(Shop::iterator i = store.begin();
			i != store.end(); ++i)
		cout << *i << endl;
}






