#include <iostream>

using namespace std;

#define _DEBUG
#ifdef _DEBUG
#define ECHO(X) cout << "--DEBUG--" << X << endl; 
#else
#define ECHO(X)
#endif

class Test
{
public:
	Test()
	{
		ECHO("Inside the Test::Test() constructor");
	}
	~Test()
	{
		ECHO("Inside the Test::~Test() destructor");
	}
	void Print()
	{
		cout << "hello world!" << endl;
	}

private:
};

int main(int argc, char *argv[])
{
	Test obj;
	obj.Print();
	return 0;
}

