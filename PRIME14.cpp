#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

long long snt(int n)
{
	if (n < 2) {
		return 0;
	}
	else
		for (int a = 2; a <= sqrt(n); a++)
		{
			if (n % a == 0)
			{
				return 0;
			}
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
		for (long long i = 1; i <= sqrt(N); i++)
		{
			if (snt(i) == 1 && i * i < N)
			{
				cout << i * i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}