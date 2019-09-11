#if 0

#define _TEST
#include "company.h"
#include <iostream>

using namespace std;

double EmployeeNetSalary(Employee& i, double tax)
{
	double amount = i.CalculateTax(tax);
	return i.GetBaisc() + i.GetDa() - amount;
}

int main()
{
	Employee emp1;
	Employee emp2("Harpreet", 200000);

	emp1.SetName("Takhi");
	emp1.SetBasic(100000);

	cout << "Total number of employees : " << Employee::EmployeeCount() << endl;
	cout << "Salary of emp id " << emp1.GetId() << " is " << emp1.CalculateSalary() << endl;
	cout << "Salary of emp id " << emp2.GetId() << " is " << emp2.CalculateSalary() << endl;

	cout << "Salary of emp id " << emp1.GetId() << " after Tax is " << EmployeeNetSalary(emp1, 0.0) << endl;
	cout << "Salary of emp id " << emp2.GetId() << " after Tax is " << EmployeeNetSalary(emp2, 0.1) << endl;

	return 0;
}

#endif
