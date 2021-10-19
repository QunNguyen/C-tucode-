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
void in(int a[], int n)
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
		int n, m;
		cin >> n >> m;
		int so = n * n;
		int* a = new int[so];
		nhap(a, so);
		sort(a, a + so);
		cout << a[m - 1];
		cout << endl;
	}
}