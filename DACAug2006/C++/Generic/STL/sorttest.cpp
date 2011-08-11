#include "customer.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(const Customer& cust)
{
	cout << "Credit of Customer " << cust.Code()
		 << " is " << cust.Credit() << endl;
}

class CompareCredits
{
public:
    bool operator()(const Customer& first,
                const Customer& second) const
    {
        return first.Credit() > second.Credit();
     }
};

int main()
{
	typedef vector<Customer> Shop;
	
	Shop store;
	store.push_back(Customer(403, 5000));
	store.push_back(Customer(405, 3000));
	store.push_back(Customer(404, 4000));
	store.push_back(Customer(402, 7000));
	store.push_back(Customer(401, 6000));
	sort(store.begin(), store.end(), CompareCredits());
	for_each(store.begin(), store.end(), Print);
}






