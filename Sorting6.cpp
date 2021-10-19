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
		cin >> n;
		int* a = new int[n];
		nhap(a, n);
		sort(a, a + n);
		in(a, n);
		cout << endl;
	}
}