#include <iostream>
#include <string>

using namespace std;

int Search(string items[], int count, string key)
{
	if(key.size() < 4) throw 1.1;
	for(int i = 0; i < count; i++)
		if(items[i] == key) return i;
	throw string("No such key");
}

int main()
{
	string members[] = {"jack", "jill", "john",
				"jane", "jim"};
	int ages[] = {34, 21, 27, 31, 19};
	
	string name;
	cout << "Enter Name : ";
	getline(cin, name);
	try
	{
		int k = Search(members, 5, name);
		cout << "Age = " << ages[k] << endl;
	}
	catch(string err)
	{
		cout << err << endl;
	}
	catch(...)
	{
		cout << "Unknoun error" << endl;
	}
	
	cout << "Done!" << endl;
	
}









