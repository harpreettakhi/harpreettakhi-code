#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template<typename Source>
string ConvertToString(const Source& value)
{
	stringstream ss;
	ss << value;		
	return ss.str();
}

// simple overload
string ConvertToString(const char& value)
{
	return string("'") + value + string("'");
}

// explicit specialization
template<>
string ConvertToString(const bool& value)
{
	return value ? string("true") : string("false");
}

template<typename Target>
Target ConvertFromString(const string& value)
{
	stringstream ss;
	Target result;
	ss << value;
	ss >> result;
	return result;
}

template<typename Target, typename Source>
Target Convert(const Source& value)
{
	stringstream ss;
	Target result;
	ss << value;
	ss >> result;
	return result;
}

class Student
{
public:
	Student(int d, int q) : id(d), iq(q){}

	int ID() const
	{
		return id;
	}	
	
	int IQ() const
	{
		return iq;
	}

private:
	int id, iq;
};

ostream& operator<<(ostream& out, const Student& s)
{
	return out << s.ID() << '\t' << s.IQ();
}

int main()
{
	double d = 3.1415;
	string ds = ConvertToString(d);
	cout << "ds = " << ds << endl;
	int i = 65535;
	string is = ConvertToString(i);
	cout << "is = " << is << endl;
	char c = 'A';
	string cs = ConvertToString(c);
	cout << "cs = " << cs << endl;
	bool b = true;
	string bs = ConvertToString<bool>(b);
	cout << "bs = " << bs << endl;
	Student s(23, 105);
	string ss = ConvertToString(s);
	cout << "ss = " << ss << endl;
	double sd = ConvertFromString<double>(ds);
	cout << "sd + 4.5 = " << (sd + 4.5) << endl;
	float f = 4.15;
	string fs = Convert<string>(f);
	cout << "fs = " << fs << endl;
}



























