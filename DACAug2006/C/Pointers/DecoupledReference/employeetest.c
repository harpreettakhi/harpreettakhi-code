#include "employee.h"
#include <stdio.h>

int main()
{
	HANDLE hEmp1 = 0;
	HANDLE hEmp2 = 0;
	
	hEmp1 = HireEmployee(1001, 25000);
	PrintEmployee(hEmp1);
	hEmp2 = HireEmployee(1002, 52000);
	PrintEmployee(hEmp2);
	FireEmployee(hEmp2);
	PrintEmployee(hEmp2);
	
	return 0;
}

