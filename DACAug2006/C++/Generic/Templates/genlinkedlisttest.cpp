#include "genlinkedlist.h"
#include "genalgo.h"
#include <iostream>
#include <string>

using namespace std;

bool IsSmall(double value)
{
	return value < 10;
}

typedef LinkedList<double> List;

int main()
{
	List store;
	store.Add(19.23);
	store.Add(7.65);
	store.Add(21.43);
	store.Add(4.06);
	store.Add(8.33);
	store.Add(11.57);
	store.Add(16.25);
	for(List::Iterator i = store.Begin();
				i != store.End(); ++i)
		cout << *i << endl;
	WriteIf(store.Begin(), store.End(), IsSmall);
	cout << "Middle value : " 
		 << Middle(store.Begin(), store.End()) << endl;
	string greet = "Goodbye!";
	Write(greet.begin(), greet.end());
}










