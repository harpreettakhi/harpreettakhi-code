#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Student
{
public:
	Student(int q)
	{
		id = 0;
	 	iq = q;
	}
	
	int ID() const
	{
		if(id == 0) id = ++count;
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
	mutable int id;
	int iq;
	static int count;
};

int Student::count = 0;

inline ostream& operator<<(ostream& out,
					const Student& s)
{
	return out << s.ID() << '\t' << s.GetIQ();
}

void Process(const Student* s)
{
	Student* t = const_cast<Student*>(s);
	t->SetIQ(s->GetIQ() + 5);
}

void UCase(string& text)
{
	char* p = const_cast<char*>(text.c_str());
	for(int i = 0; i < text.size(); i++)
		p[i] = toupper(p[i]);
}

int main()
{
	Student jack(110);
	cout << jack << endl;
	Process(&jack);
	cout << jack << endl;
	string greet = "Goodbye!";
	UCase(greet);
	cout << greet << endl; 
}

























