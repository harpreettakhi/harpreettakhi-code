#include <stdio.h>

int main()
{
	char* names[3];// = {"A", "B", "C"};
	int i = 0;
	
	
	names[0] = "Imran";
	
	for(i = 0; i < 3; i++)
		scanf("%s", names[i]);
	
	
	for(i = 0; i < 3; i++)
		printf("%s\n", names[i]);

	return 0;
}

