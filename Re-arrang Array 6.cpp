#include<iostream>
#include<algorithm>
using namespace std;

int a[100000];
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
		nhap(a, n);
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i + 1] > 0 && a[i + 1] == a[i])
			{
				a[i + 1] = 0;
				a[i] *= 2;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 0)
			{
				for (int j = i + 1; j < n; j++)
				{
					if (a[j] != 0)
					{
						swap(a[i], a[j]);
						break;
					}
				}
			}
		}
		xuat(a, n);
		cout << endl;
	}
}