#include <stdio.h>

typedef struct{
	int id;
	char* name;
	float salary;
}Employee;

void PrintEmployee(Employee* emp)
{
	printf("%d\t%s\t%.2f\n", emp->id, emp->name, emp->salary);
}

int main()
{
	Employee* emp1 = 0;
	Employee* emp2 = 0;
	
	emp1 = (Employee*) malloc(sizeof(Employee));
	emp1->id = 1001;

	emp1->name = (char*) malloc(sizeof(char) * 15);
	strcpy(emp1->name, "Imran");
	emp1->salary = 25000;
	emp2 = emp1;
		
	PrintEmployee(emp1);
	free(emp1->name);
	PrintEmployee(emp2);
		
	return 0;
}







