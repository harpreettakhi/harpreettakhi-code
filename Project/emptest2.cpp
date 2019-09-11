#if 1

//#define _TEST
#include "company.h"
#include <iostream>
#include<stdio.h>

using namespace std;

double EmployeeNetSalary(Employee* i, double tax)
{
	double amount = i->CalculateTax(tax);
	return i->GetBaisc() + i->GetDa() - amount;
}

int main()
{

	Employee* emp = new Employee[3];

	cout << "Total number of employees : " << Employee::EmployeeCount() << endl;
	for (int i = 0; i < 3; i++)
	{
		int val = 300000 * (i + 1);
		emp[i].SetBasic(val);

		//cout.precision(numeric_limits<double>::digits10 + 1);
		cout.precision(10);
		cout << "Salary of emp id " << emp[i].GetId() << " is " << emp[i].CalculateSalary() << endl;
		cout << "Salary of emp id " << emp[i].GetId() << " after Tax is " << EmployeeNetSalary(&emp[i], 0.1 * i) << endl;

		//cout << "Salary of emp id " << emp[i].GetId() << " is "; 
		//printf("%f", emp[i].CalculateSalary());
		//cout << endl;
		//cout << "Salary of emp id " << emp[i].GetId() << " after Tax is ";
		//printf("%f", EmployeeNetSalary(&emp[i], 0.1 * i));
		//cout << endl;
	}

	delete[] emp;

	return 0;
}

#endif
