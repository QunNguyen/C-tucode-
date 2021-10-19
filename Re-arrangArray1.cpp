#include<iostream>
using namespace std;

void mang(long long a[], int n)
{
	for (int i = 1; i < n; i++)
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
		long long  n, j, a[100];
		long long i;
		cin >> n;
		
		for ( i = 0; i < 100; i++)
		{
			a[i] = -1;
		}

		for ( i = 0; i < n; i++)
		{
			cin >> j;
			if (j >= 0 && j < n)
			{
				a[j] = j;
			}
		}
		for ( i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}