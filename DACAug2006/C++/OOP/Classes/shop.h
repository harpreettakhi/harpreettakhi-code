#ifndef SHOP_H
#define SHOP_H

#include <iostream>

#ifdef _TEST
#define ECHO(X) std::cout << X << std::endl
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
	}
	
	double GetCost() const
	{
		return cost;
	}

	void SetCost(double value)
	{
		cost = value;	
	}
	
	float GetProfit() const
	{
		return profit;
	}
	
	void SetProfit(float value) 
	{
		profit = value;	
	}

	double SellingPrice() const
	{
		return cost * (1 + profit / 100);
	}

	static int CountItems()
	{
		return count;
	}
	
	~Item()
	{
		count--;
		ECHO("Item instance destroyed");
	}
	
private:
	double cost;
	float profit;
	static int count;
};

int Item::count = 0;

#endif 







