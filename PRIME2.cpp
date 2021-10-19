#include<iostream>
#include<math.h>
using namespace std;

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
		int i = 0;
		std::cin >> a;
		if (a < 0) return 0;
		if (snt(a) == 1) {
			cout << a << endl;
		}
		else
		{
			int MAX = 0;
			for (long long j = 2; j <= sqrt(a); j++)
			{
				if (snt(j) == 1)
				{
					if (j > MAX) { MAX = j; }
					while (a % j == 0)
					{
						a /= j;
					}
				}
			}
			if (a > 1 && a > MAX)
			{
				MAX = a;
			}
			std::cout << MAX << endl;
		}
	}
	return 0;
}