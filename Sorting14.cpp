#include<iostream>
#include<algorithm>
using namespace std;

void mang(int a[], int n) {
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
		int n;
		cin >> n;
		int* a = new int[n];
		mang(a, n);
		sort(a, a + n);
		long long dem = 0;
		int d;
		for (int i = 0; i < n - 1; i++)
		{
			d = a[i + 1] - a[i] - 1;
			if (d != 0 && a[i] != a[i + 1])
			{
				dem += d;
			}
		}
		cout << dem << endl;
	}
}