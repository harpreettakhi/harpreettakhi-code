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
	
	fp = fopen("employee.bin", "rb");
	emp = (Employee*) malloc(sizeof(Employee));
	fread(emp, sizeof(Employee), 1, fp);
	printf("%d\t%s\t%.2f\n", emp->id, emp->name, emp->salary);
	fclose(fp);
	free(emp);
	emp = 0;
	
	return 0;
}








