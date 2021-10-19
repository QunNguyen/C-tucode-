#include<iostream>
using namespace std;

void mang(long long a[], long long n)
{
	for (long long i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int main()
{
	long long T;
	cin >> T;
	while (T--)
	{
		long long  a[100000], j;
		long long n;
		long long i;
		cin >> n;
		if (n < 0 || n>100000) return 0;
		long long h = 0;
		for (i = 0; i < n; i++)
		{
			a[i] = 0;
		}
		for (i = 0; i < n; i++)
		{
			cin >> j;
			if (j != 0)
			{
				a[h] = j;
				h++;
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}