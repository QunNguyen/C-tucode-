#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int* a = new int[n];
		mang(a, n);
		int dem = 0;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] + a[j] == k)
				{
					dem++;
				}
			}
		}
		cout << dem;
		cout << endl;
	}
}