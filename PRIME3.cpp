#include<iostream>
#include<math.h>
using namespace std;

int snt(long long n)
{
	if (n < 2) return 0;
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
	cin >> T;
	while (T--)
	{
		long long N;
		cin >> N;
		if (N < 0) return 0;
		for (long long j = 1; j <= N; j++)
		{
			if (snt(j) == 1)
			{
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
