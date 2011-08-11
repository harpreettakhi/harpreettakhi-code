#include "customer.h"
#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main()
{
	// typedef queue<Customer> Shop;
	typedef queue<Customer, list<Customer> > Shop;

	Shop store;
	store.push(Customer(403, 5000));
	store.push(Customer(405, 3000));
	store.push(Customer(404, 4000));
	store.push(Customer(402, 7000));
	store.push(Customer(401, 6000));
	while(!store.empty())
	{
		cout << store.front() << endl;
		store.pop();
	}
}






