#include <stdio.h>
int main()
{
	int x = 7;
	int* const ptr = &x;
	int y = 9;
	
	*ptr = 2;
	printf("x = %d\n", x);
	ptr = &y;
	printf("x = %d\n", *ptr);

	return 0;
}

