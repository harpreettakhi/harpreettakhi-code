void Delay(int seconds)
{
	long long t = -10000000 * seconds;
	void* params[] = {0, &t};
	__asm	
	{
		mov	eax, 32h
		lea	edx, params
		int	2eh
	}
}

int main()
{
	Delay(10);
}
