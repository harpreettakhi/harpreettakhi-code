#include <stdio.h>

int main()
{
	char* names[3];
	int i = 0;
	
	for(i = 0; i < 3; i++)
		names[i] = (char*) malloc(sizeof(char) * 25);

	for(i = 0; i < 3; i++)
	{
		printf("Enter Name :");
		scanf("%s", names[i]);
	}

	for(i = 0; i < 3; i++)
		printf("\t%s\n", names[i]);

	return 0;
}









