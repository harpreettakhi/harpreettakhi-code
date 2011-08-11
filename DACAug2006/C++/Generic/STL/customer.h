#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class Customer
{
public:
	Customer(int code = 0, double credit = 0)
	{
		_code = code;
		_credit = credit;
	}
	
	int Code() const
	{
		return _code;
	}

	double Credit() const
	{
		return _credit;
	}

	bool operator==(const Customer& rhs) const
	{
		return _code == rhs._code;
	}

	bool operator<(const Customer& rhs) const
	{
		return _code < rhs._code;
	}

	Customer& operator+=(double rhs)
	{
		_credit += rhs;
		return *this;
	}
	
	friend std::ostream& operator<<(
	  std::ostream& out, const Customer& rhs)
	{
		out << rhs._code << '\t' 
			<< rhs._credit;
		return out;
	}
	
	friend std::istream& operator>>(
	  std::istream& in, Customer& rhs)
	{
		in >> rhs._code >> rhs._credit;
		return in;
	}


private:
	int _code;
	double _credit;
};


#endif


