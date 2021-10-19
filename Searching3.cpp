#include<iostream>
using namespace std;

void nhapmang(long long a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
	}
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long a[100000], N;
		cin >> N;
		nhapmang(a, N);
		for (int i = 1; i < N; i++)
		{
			if (a[i] + 1 != a[i + 1])
			{
				cout << a[i] + 1 << " ";
				break;
			}
		}
		cout << endl;

	}
	return 0;
}