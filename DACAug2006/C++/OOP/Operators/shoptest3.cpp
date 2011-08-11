#include "shop.h"
#include <iostream>

using namespace std;

Item operator-(const Item& lhs, const Item& rhs)
{
	double c = lhs.GetCost() - rhs.GetCost();
	float p = (lhs.GetProfit() > rhs.GetProfit()) ?
				lhs.GetProfit() : rhs.GetProfit();
	return Item(c, p);
}

int main()
{
	Item tv(12000, 16);
	Item vcr(9000, 12);
	Item combo = tv + vcr; // tv.operator+(vcr);
	cout << "TV" << "\t" << tv.SellingPrice() << endl;
	cout << "VCR" << "\t" << vcr.SellingPrice() << endl;
	cout << "COMBO" << "\t" << combo.SellingPrice() 
					<< endl;
	Item tv2 = ++tv; //tv.operator++();
	cout << "TV" << "\t" << tv.SellingPrice() << endl;
	cout << "TV2" << "\t" << tv2.SellingPrice() << endl;
	Item vcr2 = vcr++; //vcr.operator++(0);
	cout << "VCR" << "\t" << vcr.SellingPrice() << endl;
	cout << "VCR2" << "\t" << vcr2.SellingPrice() << endl;
	Item x = tv - vcr; // operator-(tv, vcr);
	double y = x;
	cout << x << "\t" << y << endl;

}






