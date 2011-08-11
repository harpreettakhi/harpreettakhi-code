#include <stdio.h>

void Swap(int* a, int* b)
{
	int temp = 0;
	
	temp = *a;
 	*a = *b;
	*b = temp;
}	

int main()
{
	int a = 5;
	int b = 7;
	
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("\ta = %d b = %d\n", a, b);
		

	return 0;
}






