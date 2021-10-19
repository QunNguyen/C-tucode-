#include<iostream>
#include<algorithm>
using namespace std;

void mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void gop(int a[], int n, int b[], int m, int c[], int& p)
{
	p = n + m;
	for (int i = 0; i < p; i++)
	{
		if (i < n)
			c[i] = a[i];
		else c[i] = b[i - n];
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int p = m + n;
		int* a = new int[p];
		mang(a, p);
		sort(a, a + p);
		for (int i = 0; i < p; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}