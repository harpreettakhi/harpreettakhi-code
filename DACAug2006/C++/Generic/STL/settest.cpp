#include "customer.h"
#include <iostream>
#include <set>

using namespace std;

int main()
{
	typedef multiset<Customer> Shop;
	
	Shop store;
	store.insert(Customer(403, 5000));
	store.insert(Customer(405, 3000));
	store.insert(Customer(404, 4000));
	store.insert(Customer(402, 7000));
	store.insert(Customer(401, 6000));
	store.insert(Customer(404, 6000));
	for(Shop::iterator i = store.begin();
			i != store.end(); ++i)
		cout << *i << endl;
}






