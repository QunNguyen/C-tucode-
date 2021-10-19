#include<iostream>
#include<math.h>

int snt(long long n)
{
	if (n < 2)
	{
		return 0;
	}
	else
		for (long long i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) return 0;
		}
	return 1;
}

int main()
{
	long long T;
	std::cin >> T;
	long long a;
	while (T--)
	{
		std::cin >> a;
		if (a < 0) return 0;
		for (int j = 2; j <= sqrt(a); j++)
		{
			while (a % j == 0)
			{
				std::cout << j << " ";
				a /= j;
			}
		}
		if (a>1)
		{
			std::cout << a;
		}
		std::cout << std::endl;
	}
	return 0;
}
