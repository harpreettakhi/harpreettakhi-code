#include <stdio.h>

typedef int (*PRINT)(int);

int LessThan6(int data)
{
	return data < 6;
}

int GreaterThan3(int data)
{
	return data > 3;
}

int IsEven(int data)
{
	return (data % 2 == 0);
}

int main()
{
	int array[4] = {7, 6, 1, 3};
	PRINT lt = LessThan6;
	PRINT gt = GreaterThan3;
	PRINT ev = IsEven;
		
	Display(array, 4, lt);
	printf("----\n");
	Display(array, 4, gt);
	printf("----\n");
	Display(array, 4, ev);

	return 0;
}









