#include "shop.h"
#include <iostream>

using namespace std;

class Order
{
public:
	explicit Order(int n = 5) : size(n), count(0)
	{
		items = new Item[n];
	}

	Order(const Order& other)
	{
		size = other.size;
		count = other.count;
		items = new Item[size];
		for(int i = 0; i < count; i++)
			items[i] = other.items[i];
	}

	Order& operator=(const Order& other) 
	{
		if(&other != this)
		{
			delete[] items;
			size = other.size;
			count = other.count;
			items = new Item[size];
			for(int i = 0; i < count; i++)
				items[i] = other.items[i];
		}
		return *this;
	}
	
	int Size() const
	{
		return size;
	} 	

	int Count() const
	{
		return count;
	}

	bool Add(const Item& i)
	{
		if(count == size) return false;
		items[count++] = i;
		return true;
	}

	Item& operator[](int index) const
	{
		if(index >= count) throw index;
		return items[index];
	}
	
	double operator()(float tax) const
	{
		double total = 0;
		for(int i = 0; i < count; i++)
			total += items[i].SellingPrice();
		return total * (1 + tax / 100);
	}

	~Order()
	{
		delete[] items;
	}

private:
	int size;
	int count;
	Item* items;
};

int main()
{
	Order myorder(10);
	myorder.Add(Item(3500, 9));
	myorder.Add(Item(2500, 4));
	myorder.Add(Item(500, 6));
	myorder.Add(Item(1500, 7));
	for(int i = 0; i < myorder.Count(); i++)
		cout << myorder[i] << endl;
	cout << "Total Payment : " << myorder(3) << endl; 
}










