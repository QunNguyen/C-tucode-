#include<iostream>
using namespace std;


void nhapmang(long long a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int main()
{	
	int T, N;
	cin >> T;
	while (T--)
	{
		cin >> N;
		long long a[10000];
		nhapmang(a, N);
		int dem[100000] = { 0 };
		int kt = 0;
		for (int i = 0; i < N; i++)
		{
			dem[a[i]]++;
			if (dem[a[i]] == 2)
			{
				cout << a[i] << endl;
				kt = 1;
				break;
			}
		}
		if (kt == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}