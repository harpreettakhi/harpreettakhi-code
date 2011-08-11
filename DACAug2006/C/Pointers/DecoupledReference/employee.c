#include "employee.h"

typedef struct{
	int empid;				// Unique ID of Employee
	double salary; 
}Employee;

static HANDLE objects[10];

HANDLE HireEmployee(int id, double salary)
{
	int i = 0;
	Employee* emp = 0;
	
	for(i = 0; i < 10; i++)
		if(objects[i] == 0) break;
	objects[i] = (HANDLE) malloc(sizeof(Employee));
	emp = (Employee*) objects[i];
	emp->empid = id;
	emp->salary = salary;

	return (HANDLE) (i + 1000);
}

void PrintEmployee(HANDLE hEmp)
{
	int index = (int) hEmp - 1000;
	Employee* emp = (Employee*) objects[index];
	printf("ID : %d\tSalary : %.2lf\n", emp->empid,
								 emp->salary);
}

void FireEmployee(HANDLE hEmp)
{	
	int index = (int) hEmp - 1000;
	free(objects[index]);
	objects[index] = 0;
}

















