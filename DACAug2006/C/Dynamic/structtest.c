#include <stdio.h>

typedef struct{
	int id;
	char name[15];
	float salary;
}Employee;

void PrintEmployee(Employee* emp)
{
	printf("%d\t%s\t%.2f\n", emp->id, emp->name, emp->salary);
}

int main()
{
	Employee emp = {1001, "Imran", 25000};
		
	PrintEmployee(&emp);
		
	return 0;
}







