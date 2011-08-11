#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

int Inc(jmp_buf* mark, int n)
{
	if(n < 0) longjmp(*mark, 1);
	return ++n;
}

int Dec(jmp_buf* mark, int n)
{
	if(n > 10) longjmp(*mark, 2);
	return --n;
}

void Test(jmp_buf* mark, int n)
{
	if(n == 0) longjmp(*mark, 3);
}

void Action(jmp_buf* mark, int n)
{
	jmp_buf env;
	int err = setjmp(env);
	switch(err)
	{
	case 0:
		printf("Inc = %d\n", Inc(&env, n));
		printf("Dec = %d\n", Dec(&env, n));
		Test(&env, n);
		break;
	case 1:
		printf("Error raised by Inc\n");
		break;	
    case 2:
        printf("Error raised by Dec\n");
        break;
	default:
		longjmp(*mark, err);
	}
	printf("Done!\n");

}

int main(int argc, char** argv)
{

	jmp_buf env;

	if(setjmp(env) == 0)
		Action(&env, atoi(argv[1]));
	else
		printf("Aborted!\n");
	
}








