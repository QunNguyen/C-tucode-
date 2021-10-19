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
	long long a[100000], t;
	int N,M;
	cin >> t;
	while (t--)
	{
		cin >> N >> M;
		int dem = 0;
		nhapmang(a, N);
		for (int i = 0; i < N; i++)
		{
			if (a[i] == M)
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			cout << -1;
		}
		else cout << dem;
		cout << endl;
	}
}