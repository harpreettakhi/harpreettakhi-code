#include "list.h"
#include <stdio.h>

void PrintString(void* data)
{
	char* str = (char*) data;
	printf("-- %s\n", str);
}

void PrintInt(void* data)
{
	int* iptr = (int*) data;
	printf(">> %d\n", *iptr);
}

int main()
{
	int iarray[4] = {89, 76, 2, 7};
	LinkedList strlist;
	LinkedList intlist;
	
	Initialize(&strlist);
	AddNode(&strlist, "Jack");
	AddNode(&strlist, "Jill");
	AddNode(&strlist, "Jeff");
	AddNode(&strlist, "Jim");
	AddNode(&strlist, "John");
	Traverse(&strlist, PrintString);
	
	Initialize(&intlist);
	AddNode(&intlist, &iarray[0]);	
	AddNode(&intlist, &iarray[1]);	
	AddNode(&intlist, &iarray[2]);	
	AddNode(&intlist, &iarray[3]);	
	Traverse(&intlist, PrintInt);

	return 0;
}











