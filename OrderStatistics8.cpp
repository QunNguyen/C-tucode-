#include<iostream>
using namespace std;

void mang(long long a[], long long k)
{
	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}
}

void sapxep(long long A[], long long k)
{
	int i, j;
	int tem;
	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
		{
			if (A[i] > A[j])
			{
				tem = A[i];
				A[i] = A[j];
				A[j] = tem;
			}
		}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a[1000];
		long long n, k;
		cin >> n;
		mang(a, n);
		sapxep(a, n);
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				cout << a[n - 1] << " ";
			}
		}
		cout << endl;

	}
}

