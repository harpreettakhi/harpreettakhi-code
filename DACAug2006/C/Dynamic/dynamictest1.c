#include <stdio.h>

int main()
{
	int* ptr = 0;
	int i = 0;
	
	ptr = (int*) malloc(sizeof(int) * 4);
	
	for(i = 0; i < 4; i++)
		scanf("%d", &ptr[i]);

	for(i = 0; i < 4; i++)
		printf("\t%d\n", ptr[i]);
	
	free(ptr);
	ptr = 0;

	for(i = 0; i < 4; i++)
		printf("\t = > %d\n", ptr[i]);

	return 0;
}






