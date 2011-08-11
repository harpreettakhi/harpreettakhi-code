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

	Item(const Item& other)
	{
		cost = other.cost;
		profit = other.profit;
		count++;
		ECHO("Item instance copied");		
	}

	Item& operator=(const Item& other)
	{
		if(&other != this)
		{
			cost = other.cost;
			profit = other.profit;
		}
		ECHO("Item instance assigned");
		return *this;
	}	
	
	Item operator+(const Item& rhs) const
	{
		double c = cost + rhs.cost;
		float p = (profit + rhs.profit) / 4;
		return Item(c, p);
	}

	Item& operator++()
	{
		profit += 1;
		return *this;
	}

	Item operator++(int)
	{
		float p = profit;
		profit += 1;
		return Item(cost, p);
	}

	operator double() const
	{
		return SellingPrice();
	}	
	
private:
	double cost;
	float profit;
	static int count;
	
friend std::ostream& operator<<(std::ostream&, 
			const Item&);
};

int Item::count = 0;

std::ostream& operator<<(std::ostream& out, 
			const Item& i)
{
	out << i.cost << "\t" << i.profit;
	return out;
}

#endif 

