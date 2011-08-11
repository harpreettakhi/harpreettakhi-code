#include <stdio.h>
#include <stdlib.h>

int main()
{
        char *x = malloc(10);
	x[10] = 'a';
	
	free(x);
	return 0;
}

