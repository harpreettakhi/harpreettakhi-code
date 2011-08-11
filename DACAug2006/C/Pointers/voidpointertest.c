#include <stdio.h>

int main()
{
	int data = 7;
	int* iptr = &data;
	void* vptr = iptr;
	int* ptr = (int*) vptr;
	
	
	printf("data = %d\n", *iptr);
	printf("data = %d\n", *((int*)vptr));
	printf("data = %d\n", *ptr);

	return 0;
}

