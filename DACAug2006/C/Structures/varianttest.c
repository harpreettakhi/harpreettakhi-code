#include <stdio.h>

typedef enum{Char, Int, Double} DataType;

typedef struct{
	DataType type;
	union
	{
		char c;
		int i;
		double d;
	}; 
}Variant;

Variant Add(Variant first, Variant second)
{
	Variant result;
	result.type = first.type;
	switch(result.type)
	{
		case 0:
			result.c = first.c + second.c;
			break;
		case 1:
			result.i = first.i + second.i;
			break;
		case 2:
			result.d = first.d + second.d;
			break;
	}
	return result;
}

int main()
{
	Variant first = {Int, 20};
	Variant second = {Int, 50};
	Variant result;
	
	Variant third;
	third.i = 20;
	third.c = 'a';
	printf("%c %d",third.c, third.i);
	result = Add(first, second);
	printf("Result : %d\n", result.i);	

	return 0;
}











