#ifndef SHOP_H
#define SHOP_H

#include <iostream>

#ifdef _TEST
#define ECHO(X) std::cout << "--" << X << std::endl
#else 
#define ECHO(X)
#endif

class Item
{
public:

	Item(double c = 1000, float p = 10)
	{
		cost  = c;
		profit = p;
		count++;
		ECHO("Item instance initialized");
		//vptr = Item::vtbl; 
	}
	
	double GetCost() const
	{
		return cost;
	}

	void SetCost(double value)
	{
		cost = value;	
	}
	
	virtual float GetProfit() const
	{
		return profit;
	}
	
	void SetProfit(float value) 
	{
		profit = value;	
	}

	virtual double SellingPrice() const
	{
		return cost * (1 + profit / 100);
	}
	
	static int CountItems()
	{
		return count;
	}

	virtual ~Item()
	{
		count--;
		ECHO("Item instance destroyed");
	}

	Item(const Item& other)
	{
		cost = other.cost;
		profit = other.profit;
		count++;
		ECHO("Item instance copied");		
	}
	
protected:
	double cost;	

private:
	// int* vptr;
	float profit;
	static int count;
	
};

/*
	type_info Item::typeid = {"Item", {0}};
	int Item::vtbl[] = {&Item::typeid, 
						&Item::GetProfit, 
						&Item::SellingPrice, 
						&Item::~Item
						};						
*/

int Item::count = 0;

class UsedItem : public Item
{
public:
	UsedItem(double c = 1000, float p = 10, float d = 25)
					: Item(c, p)
	{
		discount = d;
		ECHO("UsedItem instance initialized");
		// vptr = UsedItem::vtbl;
	}

	using Item::SetCost;

	void SetCost()
	{
		cost = 1000;
	}
	
	virtual float GetDiscount() const
	{
		return discount;
	}
	
	void SetDiscount(float value)
	{
		discount = value;
	}
		
	double SellingPrice() const
	{
		double price = Item::SellingPrice();
		return price * (1 - discount / 100);
	}

	~UsedItem()
	{
		ECHO("UsedItem instance destroyed");
	}

private:
	float discount;
};


/*
	type_info UsedItem::typeid = {
							"UsedItem", 
							{&Item::typeid, 0, 0}
						};
	int UsedItem::vtbl[] = {&UsedItem::typeid, 
						&Item::GetProfit, 
						&UsedItem::SellingPrice,
						&UsedItem::~UsedItem,
						&UsedItem::GetDiscount
						};						
*/

#endif 
















