#define _TEST
#include "shop.h"
#include <iostream>

using namespace std;

double Installment(const Item* i)
{
	double amount = i->SellingPrice();
	return amount / 12;
}

int main()
{
	Item* pc = new Item;
	pc->SetCost(22000);
	// Item::SetCost(pc, 22000);
	Item* ac = new Item(18000, 12);
	cout << "Selling price of PC is "
		 << pc->SellingPrice()
		 << " and Installment is "
		 << Installment(pc) << endl;
	cout << "Selling price of AC is "
		 << ac->SellingPrice()
		 << " and Installment is "
		 << Installment(ac) << endl;
	cout << "Number of Items = "
		 << Item::CountItems() << endl;
	delete ac;
	delete pc;
}








