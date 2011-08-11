#include <iostream>
#include <new>

using namespace std;

class Data
{
public:
	Data()
	{
		cout << "-- Data instance created" << endl;
	}

	void SetValue(double v)
	{
		value = v;
	}

	double GetValue() const
	{
		return value;
	}

	~Data()
	{
		cout << "-- Data instance destroyed" << endl;
	}

private:
	double value;

};

class Singleton
{
public:
	Singleton()
	{
		cout << "-- Singleton instance created" << endl;
	}

	void SetValue(double v)
	{
		value = v;
	}

	double GetValue() const
	{
		return value;
	}

	static void* operator new(unsigned int size)
	{
		if(count++ == 0)
		{
			store = ::new char[size];
			cout << "-- Store allocated" << endl;
		}
		return store;
	}
	
	static void operator delete(void* ptr)
	{
		if(--count == 0) 
		{
			::delete[] store;
			cout << "-- Store deallocated" << endl;
		}
	}
	
	~Singleton()
	{
		cout << "-- Singleton instance destroyed" << endl;
	}

private:
	double value;
	static char* store;
	static int count;
};

char* Singleton::store = 0;
int Singleton::count = 0;

char buffer[1024];

int main()
{
	Data* d = new (buffer) Data;
	d->SetValue(3.14);
	cout << "d:value = " << d->GetValue() << endl;
	d->~Data();
	
	Singleton* p = new Singleton;
	cout << "p = " << p << endl;
	Singleton* q = new Singleton;
	cout << "q = " << q << endl;
	q->SetValue(3.14);	
	cout << "p:value = " << p->GetValue() << endl;
	delete q;
	delete p;
}
	











