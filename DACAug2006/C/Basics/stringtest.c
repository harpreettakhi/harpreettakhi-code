#include <stdio.h>
int main()
{
	char names[2][15] = {"abc", "xyz"};
	
	printf("%s\t%s\n", names, *names);

	return 0;
}

