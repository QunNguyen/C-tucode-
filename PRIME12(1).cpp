#include<iostream>
#include<math.h>
using namespace std;

int snt(int n)
{
	if (n < 2) return 0;
	else 
		for (int i = 2; i < sqrt(n); i++)
		{
			if (n % i == 0) return 0;
		}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long N,a[1001],k;
		cin >> N>>k;

		int dem = 1; // khoi tao bo dem
		for (int i = 0; i < 1001; i++)
		{
			a[i] = 0; // khoi tao mang bang 0
		}
		if (snt(N) == 1)
		{
			if (k == 1) { cout << N << endl; }
			else cout << -1 << endl;
		}
		else
		{
			for (int j = 2; j < sqrt(N); j++)
			{
				while (N % j == 0)
				{
					a[dem] = j; // gan mang bang j qua moo lan chia
					dem++;
					N /= j;
				}
				if (N == 1)
				{
					dem = 1;
					break;
				}
			}
			if (N != 1)
			{
				a[dem] = N;
				dem = 1;
			}
			if (a[k] == 0) cout << "-1" << endl;
			else cout << a[k] <<endl;
		}
	}
}