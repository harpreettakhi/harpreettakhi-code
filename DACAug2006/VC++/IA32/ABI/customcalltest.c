extern int FibX_(int, int, int);

int FibXShim(int i, int a, int b)
{
	__asm
	{
		mov	ecx, i
		mov	edx, a
		mov	eax, b
		call	FibX_
	}
}

__declspec(naked) int FibXThunk(int i, int a, int b)
{
	__asm
	{
		mov	ecx, [esp+4]
		mov	edx, [esp+8]
		mov	eax, [esp+12]
		jmp	FibX_
	}
}

int main()
{
	// return FibXShim(5, 1, 2);
	return FibXThunk(5, 1, 2);
}







