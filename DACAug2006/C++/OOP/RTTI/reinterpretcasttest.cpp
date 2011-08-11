#include <iostream>

using namespace std;

class Student
{
public:
	Student(int d, int q)
	{
		id = d;
	 	iq = q;
	}
	
	int ID() const
	{
		return id;
	}
	
	int GetIQ() const
	{
		return iq;
	}
	
	void SetIQ(int value)
	{
		iq = value;
	}
	
	virtual ~Student()
	{
	} 

private:
	int id;
	int iq;
	
};

inline ostream& operator<<(ostream& out,
					const Student& s)
{
	return out << s.ID() << '\t' << s.GetIQ();
}

void Process(Student* s)
{
	struct _Student
	{
		int vptr, id, iq;
	}; 
	_Student* t = reinterpret_cast<_Student*>(s);
	t->id += 3;
}

int main()
{
	Student jack(12, 110);
	cout << jack << endl;
	Process(&jack);
	cout << jack << endl;
}

























