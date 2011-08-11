#define _TEST
#include "shop.h"
#include <iostream>

using namespace std;

int main()
{
	Item a = 2500; // Item a(2500);
	Item b = a;	// Item b(a);
	a = b; // a.operator=(b);	
	cout << "Item count = " << Item::CountItems()
		 << endl;	
		
	
}
