#include <iostream>

long long gcd(long long a, long long b)
{
	if (a < 0)
	{
		a *= -1;
	}
	if (b < 0)
	{
		b *= -1;
	}
	if (b == 0)
	{
		return a;
	}
	else return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
	return a * b / gcd(a, b);
}
int main() {
	int testcase;
	int n;
	std::cin >> testcase;
	while (testcase--)
	{
		std::cin >> n;
		long long temp = 1;
		for (int i = 1; i <= n; i++)
		{
			temp = lcm(temp, i);
		}
		std::cout << temp << std::endl;
	}
	return 0;
}