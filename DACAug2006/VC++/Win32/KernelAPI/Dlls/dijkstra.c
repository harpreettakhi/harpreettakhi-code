int __stdcall GreatestDivisor(int first, int second)
{
	if(first > second)
		return GreatestDivisor(first - second, second);
	else if(first < second)
		return GreatestDivisor(first, second - first);
	return first;
}

int __stdcall LeastMultiple(int first, int second)
{
	int gcd = GreatestDivisor(first, second);
	if(gcd == 0) return 0;
	return first * second / gcd;
}
