#include <stdio.h>

int main()
{
	int** array = 0;
	int row = 0;
	int col = 0;
	int i = 0;

	array = (int**) malloc(sizeof(int*) * 2);
	array[0] = (int*) malloc(sizeof(int) * 2);
	array[1] = (int*) malloc(sizeof(int) * 2);
	
	for(row = 0; row < 2; row++)	
	{
		for(col = 0; col < 2; col++)
			scanf("%d", &array[row][col]);
	}

	for(row = 0; row < 2; row++)	
	{
		for(col = 0; col < 2; col++)
			printf("\t%d\n", array[row][col]);
	}
	
	free(array[1]);
	free(array[0]);
	free(array);
	array = 0;

	return 0;
}




















