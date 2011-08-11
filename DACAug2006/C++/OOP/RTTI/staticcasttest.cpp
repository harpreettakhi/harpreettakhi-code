#include "shop.h" 
#include <iostream>

using namespace std;

class OldItem : public UsedItem
{
public:
	OldItem(double cost) : UsedItem(cost, 0, 50)
	{
		
	}
};

double TotalPrice(Item* catalog[], int count)
{
	double total = 0;
	for(int i = 0; i < count; i++)
		total += catalog[i]->SellingPrice();
	return total;	
}

double AverageDiscount(Item* catalog[], int count)
{
	double total = 0;
	for(int i = 0; i < count; i++)
	{
		if((typeid(*catalog[i]) == typeid(UsedItem))
			|| (typeid(*catalog[i]) == typeid(OldItem)))
		{
			UsedItem* ui = static_cast<UsedItem*>
								(catalog[i]);
			total += ui->GetDiscount();
		}
	}
	return total / count;	
}

int main()
{
	Item* items[] = {
						new Item(9000, 8), 
						new Item(12000, 12),
						new UsedItem(5000, 9, 20),
						new Item(8500),
						new OldItem(15000)
					};
	cout << "Total Price : " 
		 << TotalPrice(items, 5) << endl;
	cout << "Average Discount : " 
		 << AverageDiscount(items, 5) << endl;
	for(int i = 0; i < 5; i++)
		delete items[i];
}














