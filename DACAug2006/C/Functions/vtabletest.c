#include <stdio.h>

int Add(int first, int second)
{
	return first + second;
}

int Sub(int first, int second)
{
	return first - second;
}

int main()
{
	typedef int (*VTable)(int, int);
	VTable vptr[2] = {Add, Sub};
	
	printf("Add result : %d\n", vptr[1](20, 10));
	
	return 0;
}












