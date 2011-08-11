#define _TEST
#include "shop.h"
#include <iostream>

using namespace std;

double Installment(const Item* i)
{
	double amount = i->SellingPrice();
				// i->vptr[2](i);
	return amount / 12;
}

void Process(Item** i)
{
	Item* j = *i;
	Item& k = *j;
	k.SetProfit(1.1 * k.GetProfit());
}

int main()
{
	Item* pc = new Item;
	pc->SetCost(22000);
	// Item::SetCost(pc, 22000);
	Item* ac = new UsedItem(22000);
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
	Process(&pc);
	//Process(&ac);
	delete ac; // ac->vptr[3](ac);
	delete pc;
}

