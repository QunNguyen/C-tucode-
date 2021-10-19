#include<iostream>
#include<math.h>
using namespace std;

void mang(int *a, int &n)
{
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
}

long long gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else b -= a;
	}
	return a;
}

int main()
{
	int t;
	cin >> t;
	long long p = 10e9 + 7;
	while (t--)
	{
		int n;
		cin >> n;
		int* a = new int[n];
		mang(a, n);

		long long dem = 1;
		for (int i = 1; i <= n; i++)
		{
			dem *= a[i];
			if (dem > p)
			{
				dem = dem % p;
			}
		} //h(x)

		long long temp = gcd(a[1], a[2]);
		for (int i = 2; i <= n; i++)
		{
			temp = gcd(temp, a[i]);
		} //g(x)
		int kq = 1;
		for (int i = 1; i <= temp; i++)
		{
			dem *= dem;
			if (kq > p)
			{
				kq = kq % p;
			}
		}
		cout << kq << endl;
		delete[] a;
	}
}