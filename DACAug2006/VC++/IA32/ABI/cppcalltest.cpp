class FibX
{
public:
	FibX(int a = 1, int b = 1) : first(a), second(b){}

	// int Term(unsigned int i) const;
	// int __cdecl Term(unsigned int i) const;
	// int __stdcall Term(unsigned int i) const;
	int __fastcall Term(unsigned int i) const;
private:
	int first, second;
};

int main()
{
	FibX f(1, 2);
	return f.Term(5);
}








