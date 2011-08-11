#include "customer.h"
#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

template<typename T>
bool operator>(const T& lhs, const T& rhs)
{
	return rhs < lhs;
}

class CompareCredits
{
public:
	bool operator()(const Customer& first, 
				const Customer& second) const
	{
		return first.Credit() < second.Credit();
	 }
};

int main()
{
	// typedef priority_queue<Customer> Shop;
	// typedef priority_queue<Customer,
	// 	 vector<Customer>, greater<Customer> > Shop;
	typedef priority_queue<Customer,
		 vector<Customer>, CompareCredits> Shop;

	Shop store;
	store.push(Customer(403, 5000));
	store.push(Customer(405, 3000));
	store.push(Customer(404, 4000));
	store.push(Customer(402, 7000));
	store.push(Customer(401, 6000));
	while(!store.empty())
	{
		cout << store.top() << endl;
		store.pop();
	}
}






