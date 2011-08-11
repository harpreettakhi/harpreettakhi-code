#include <stdio.h>

void Initialize(int (*ptr)[2])
{
	int i = 0;
	
	for(i = 0; i < 2; i++)
		printf("%d\n", (*ptr)[i]);
}

int main()
{
	int array[2] = {7, 9};
	
	Initialize(&array);
	
	return 0;
}

