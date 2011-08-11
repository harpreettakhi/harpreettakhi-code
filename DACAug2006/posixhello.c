#include <unistd.h>

const char msg[] = "Hello Unix\n";

int main()
{
	write(1, msg, 11);
}
