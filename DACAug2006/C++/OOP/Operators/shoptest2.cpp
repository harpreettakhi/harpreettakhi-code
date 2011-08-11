#define _TEST
#include "shop.h"
#include <iostream>

using namespace std;

class Box
{
public:
	Box(const Item& i, int k) : item(i), id(k)
	{
		//item = i;
		//id = k;
		ECHO("Box instance initialized");	
	}
private:
	Item item;
	const int id;		
};
	
int main()
{
	Item tv(12000, 9);
	Box b(tv, 112);
	cout << "Box available" << endl;
}










