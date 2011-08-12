#include <stdio.h>
#include <excpt.h>

int value;

int Filter(int code)
{
	printf("-- Inside exception filter : %X\n", code);
	value = 1;
	return 1;	// execute handler
	// return -1;	// retry
	// return 0;	// pass
}

void Action()
{
	__try
	{
		value = 100 / value;	
	}
	__finally
	{
		printf("-- Indside termination handler : %d\n", AbnormalTermination());
	}
}

int main()
{
	printf("Value = ");
	scanf("%d", &value);
	__try
	{
		Action();		
	}
	__except(Filter(GetExceptionCode()))
	{		
		printf("-- Inside exception handler\n");
	}
	printf("Result = %d\n", value);
}








