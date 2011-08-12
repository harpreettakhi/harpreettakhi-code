#include <iostream>

using namespace std;

class Employee
{
public:
	Employee()
	{
		this->hours = 0;
		this->rate = 0;
		count++;
	}

	Employee(int h, float r)
	{
		this->hours = h;
		this->rate = r;
		count++;
	}

	Employee(const Employee& other)
	{
		this->hours = other.hours;
		this->rate = other.rate;
		count++;
	}
	
	int GetHours()
	{
		return hours;
	}

	/*
	void Employee::SetHours(Employee* this, int h)
	{
		this->hours = h;
	}
	*/

	void SetHours(int h)
	{
		hours = h;
	}

	float GetRate()
	{
		return rate;
	}
	
	void SetRate(float r)
	{
		rate = r;
	}

	double GetNetIncome()
	{
		return hours * rate;
	}
	
	static int CountEmployees()
	{
		return count;
	}
private:
	int hours;
	float rate;	// instance variables
	static int count; // class variables
};

class Salesman : public Employee
{
public:
	
private:
	double sales;
};

int Employee::count = 0;

int main()
{
	Employee jack;	// Employee::Employee(&jack);

	jack.SetHours(175); // Employee::SetHours(&jack, 175);
	jack.SetRate(100);

	cout << "Hours " << jack.GetHours() << "\t Rate " << jack.GetRate() << endl;
	cout << "Net Income : " << jack.GetNetIncome() << endl;

	Employee jill(185, 100);
	cout << "Hours " << jill.GetHours() << "\t Rate " << jill.GetRate() << endl;
	cout << "Net Income : " << jill.GetNetIncome() << endl;

	Employee jane = jill;
	cout << "Hours " << jane.GetHours() << "\t Rate " << jane.GetRate() << endl;
	cout << "Net Income : " << jane.GetNetIncome() << endl;

	Employee john;
	john = jack;	// john.operator=(jack);
	cout << "Hours " << john.GetHours() << "\t Rate " << john.GetRate() << endl;
	cout << "Net Income : " << john.GetNetIncome() << endl;


	cout << "Number of employees : " << Employee::CountEmployees() << endl;

}





