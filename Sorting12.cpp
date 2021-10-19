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
		int n, m;
		cin >> n >> m;
		int* a = new int[n];
		int* b = new int[m];
		mang(a, n);
		mang(b, m);
		int max = *max_element(a, a + n);
		int min = *min_element(b, b + m);
		cout << (long long) min*max<< endl;
	}
}