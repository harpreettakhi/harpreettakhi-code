#include <stdio.h>

typedef int (*CHECK)(void*, void*);

typedef struct{
	int id;
	float salary;
}Employee;

int FindMax(void* array, int s, int dsize, 
				CHECK check)
{
	int i = 0;
	char* base = (char*) array;
	int m = 0;
		
	for(i = 0; i < s; i++)
		if(check(base + i * dsize,  base + m * dsize)) m = i;	
	return m; 
}

int CheckInt(void* f, void* s)
{
	int* first = (int*) f;
	int* second = (int*) s;

	return (*first > *second);
}

int CheckFloat(void* f, void* s)
{
	float* first = (float*) f;
	float* second = (float*) s;

	return (*first > *second);
}

int CheckDouble(void* f, void* s)
{
	double* first = (double*) f;
	double* second = (double*) s;

	return (*first > *second);
}

int CheckEmployee(void* f, void* s)
{
	Employee* first = (Employee*) f;
	Employee* second = (Employee*) s;
	return (first->salary > second->salary);
}

int main()
{
	int iarray[4] = {7, 756, 18, 433};
	float farray[4] = {7.0, 601.0, 18.0, 933.0};
	double darray[4] = {27.0, 36.0, 728.0, 443.0};
	Employee earray[4] = {
						{101, 2500},
						{102, 43500},
						{103, 4500},
						{104, 1500}
					  };
	CHECK ic = CheckInt;
	CHECK fc = CheckFloat;
	CHECK dc = CheckDouble;
	CHECK ec = CheckEmployee;
	int max = 0;
	
	max = FindMax(iarray, 4, sizeof(int), ic);
	printf("Maximum is at position : %d\n", max + 1);
	
	max = FindMax(farray, 4, sizeof(float), fc);
	printf("Maximum is at position : %d\n", max + 1);
	
	max = FindMax(darray, 4, sizeof(double), dc);
	printf("Maximum is at position : %d\n", max + 1);
	
	max = FindMax(earray, 4, sizeof(Employee), ec);
	printf("Maximum is at position : %d\n", max + 1);
	return 0;
}









