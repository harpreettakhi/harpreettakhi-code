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
	Item* cart = new Item[3];
	for(int i = 0; i < 3; i++)	
	{
		cart[i].SetCost(2000 * i + 3000);
		cout << (i + 1) << "\t" 
			 << cart[i].SellingPrice() << "\t" 
			 << Installment(&cart[i]) << endl;
				
	}
	delete[] cart;
}


















