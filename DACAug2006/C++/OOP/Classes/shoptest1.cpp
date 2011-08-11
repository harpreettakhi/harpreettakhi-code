#define _TEST
#include "shop.h"
#include <iostream>

using namespace std;

double Installment(const Item& i)
{
	double amount = 1.12 * i.SellingPrice();
				// Item::SellingPrice(&i);
	return amount / 12;
}

int main()
{
	Item pc;
	// _ZN4ItemC1Edf(&pc, 1000, 10);
	pc.SetCost(22000); // _ZN4Item7SetCostEd(&pc, 22000);
	Item ac(18000, 12); // Item ac;
	// _ZN4ItemC1Edf(&ac, 18000, 12);
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
	// _ZN4ItemD1Ev(&ac);	
	// _ZN4ItemD1Ev(&pc);	
}





