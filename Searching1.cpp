#include<iostream>
using namespace std;

long long vitri(long long a[], long long n, long long x)
{
	int i;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	 return -1;
}

int main()
{
	long long T;
	cin >> T;
	
	while (T--)
	{
		long long N,  A;
		long long a[100000];
		cin >> N >> A;
		for (int i = 1; i <= N; i++)
		{
			cin >> a[i];
		}
		cout<<vitri(a, N, A);
		cout << endl;
	}
}