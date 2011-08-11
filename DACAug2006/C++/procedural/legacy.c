int GCD(int m, int n)
{
	if(n == 0) return m;
	return GCD(n, m % n);
}

int LCM(int m, int n)
{
	return m * n / GCD(m, n);
}

