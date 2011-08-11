typedef int (*PRINT)(int);

void Display(int* array, int s, PRINT check)
{
	int i = 0;
	for(i = 0; i < s; i++)
	{
		if(check(array[i]))
			printf("%d\n", array[i]);
	}
}

