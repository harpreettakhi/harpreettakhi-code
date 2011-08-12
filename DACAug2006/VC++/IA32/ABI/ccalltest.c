// extern int FibX(int, int, int);
// extern int __stdcall FibX(int, int, int);
extern int __fastcall FibX(int, int, int);

int main()
{
	return FibX(5, 1, 2);
}
