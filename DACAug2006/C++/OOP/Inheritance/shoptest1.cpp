#define _TEST
#include "shop.h"
#include <iostream>

using namespace std;

double Installment(const Item& i)
{
	double amount = 1.12 * i.SellingPrice();
				// i.vptr[2](&i)
	return amount / 12;
}

/*
double Installment(const UsedItem& i)
{
	double amount = 1.12 * i.SellingPrice();
				// UsedItem::SellingPrice(&i);
	return amount / 12;
}
*/

int main()
{
	Item pc;
	pc.SetCost(22000); 
	UsedItem ac(22000); 
	
	cout << "Selling price of PC is " 
		 << pc.SellingPrice() 
		 << " and Installment is " 
		 << Installment(pc) << endl;
	cout << "Selling price of AC is "
		 << ac.SellingPrice() 
		 << " and Installment is "
		 << Installment(ac) << endl;
	cout << "Number of Items = " 
		 << Item::CountItems() << endl;
	ac.SetCost(18000);
}







