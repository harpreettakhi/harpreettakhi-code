#include <stdio.h>

int main()
{
	int array[3] = {1, 2, 3};
	int i = 0;
	int* ptr = array;
	
	*(*(ptr++));
	printf("%d\n", *ptr);
	*++ptr;
	printf("%d\n", *ptr);
	
	return 0;
}

