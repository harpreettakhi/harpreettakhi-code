#include <iostream>

using namespace std;

class BaseClass
{
public:
	int basemember;
	BaseClass()
	{
		cout << "Inside BaseClass constructor" << endl;
		basemember = 0;
	}
	
	int BaseMember(int val)
	{
		cout << "Inside BaseMember function" << endl;
		return basemember + val;
	}
};

class BaseClass2
{
public:
        int basemember2;
        BaseClass2()
        {
                cout << "Inside BaseClass2 constructor" << endl;
                basemember2 = 0;
        }

        int BaseMember2(int val)
        {
                cout << "Inside BaseMember2 function" << endl;
                return basemember2 + val;
        }
};

class DrivedClass : public BaseClass, BaseClass2
{
public:
        int drivedmember;
        DrivedClass()
        {
		cout << "Inside DrivedClass constructor" << endl;
                drivedmember = 0;
        }

        int DrivedMember(int val)
        {
		cout << "Inside DrivedClass function" << endl;
                return drivedmember + val;
        }
};

int main(int argc, char *argv[])
{
	cout << "------------BaseClass-----------" << endl;
	BaseClass obj1;
	int result = obj1.BaseMember(5);
	cout << result << endl;
	cout << "----------DrivedClass-----------" << endl;
	DrivedClass obj2;
	int result1 = obj2.DrivedMember(10);
	cout << result1 << endl;
	return 0;
}

