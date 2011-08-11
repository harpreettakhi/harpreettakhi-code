#include <stdio.h>

typedef struct{
	int id;
	char name[15];
	float salary;
}Employee;

void PrintEmployee(Employee* emp, int s)
{
	int i = 0;

	for(i = 0; i < s; i++)
	printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
}

int main()
{
	Employee emp[2];
	
	emp[0].id = 1001;
	strcpy(emp[0].name, "Imran");
	emp[0].salary = 25000;
	emp[1].id = 1002;
	strcpy(emp[1].name, "Kailash");
	emp[1].salary = 52000;
		
	PrintEmployee(emp, 2);
		
	return 0;
}










