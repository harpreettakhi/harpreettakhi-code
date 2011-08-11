#include <iostream>

using namespace std;

class Buffer
{
public:
	Buffer()
	{
		cout << "-- Buffer instance created" << endl;
	}
	
	void Clear()
	{
		for(int i = 0; i < 1000; i++)
			data[i] = 0;
		cout << "-- Buffer instance cleared" << endl;
	}

	void SetValueAt(int i, int v)
	{
		data[i] = v;
	}
	
	int GetValueAt(int i) const
	{
		return data[i];
	}

	~Buffer()
	{
		cout << "-- Buffer instance destroyed" << endl;
	}

private:
	int data[1000];
	
};

void Fill(Buffer* buf, int value)
{
	cout << "-- Filling Buffer instance with " << value
		 << endl;
	if(value <= 0) throw value;
	for(int i = 0; i < 1000; i++)
		buf->SetValueAt(i, value);
}

class BufferPtr
{
public:
	BufferPtr(Buffer* b) : ptr(b)
	{
	}

	Buffer* operator->()
	{
		return ptr;		
	}
	
	operator Buffer*()
	{
		return ptr;
	}

	~BufferPtr()
	{
		delete ptr;	
	}

private:
	Buffer* ptr;
	
};

int main()
{
	int k;
	cout << "Enter an integer : ";
	cin >> k;
	try
	{
		BufferPtr b = new Buffer;
		b->Clear(); // (b.operator->())->Clear()
		Fill(b, k);
	}
	catch(int err)
	{
		cout << "ERROR : " << err << endl;  
	}
}













