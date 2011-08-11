#include <stdio.h>

typedef struct{
	int id;
	char name[15];
	float salary;	
}Employee;

int main()
{
	FILE* fp = NULL;
	Employee* emp = 0;
	
	fp = fopen("employee.bin", "wb");
	emp = (Employee*) malloc(sizeof(Employee));
	emp->id	 = 67;
	strcpy(emp->name, "Imran");
	emp->salary = 25000;
	fwrite(emp, sizeof(Employee), 1, fp);
	
	fclose(fp);
	free(emp);
	emp = 0;
	
	return 0;
}








