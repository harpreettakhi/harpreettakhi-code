#include "customer.h"
#include <iostream>
#include <map>

using namespace std;

int main()
{
	typedef pair<string, Customer> Entry;
	typedef multimap<string, Customer> Shop;
	
	Shop store;
	store.insert(Entry("jack", Customer(403, 5000)));
	store.insert(Entry("jill", Customer(405, 3000)));
	store.insert(Entry("jeff", Customer(404, 4000)));
	store.insert(Entry("john", Customer(402, 7000)));
	store.insert(Entry("jane", Customer(401, 6000)));
	store.insert(Entry("john", Customer(406, 6500)));
	for(Shop::iterator i = store.begin();
			i != store.end(); ++i)
		cout << i->first << "\t" << i->second << endl;
	string name;
	cout << "Name : ";
	cin >> name;
	Shop::iterator i = store.find(name);
	if(i != store.end())
	{
		Shop::iterator k = store.upper_bound(name);
		for(; i != k; ++i)
			cout << "Credit : " << i->second.Credit() 
				 << endl;
	}
}











