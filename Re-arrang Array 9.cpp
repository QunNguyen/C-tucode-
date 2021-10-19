#include<iostream>
#include<algorithm>
using namespace std;

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[10000];
		nhap(a, n);
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				cout << a[0] * a[1] << " ";
			}
			if (i == n - 1)
			{
				cout << a[n - 1] * a[n - 2] << " ";
			}
			if (i != 0 && i != n - 1)
			{
				cout << a[i - 1] * a[i + 1] << " ";
			}
		}
		cout << endl;
	}
}