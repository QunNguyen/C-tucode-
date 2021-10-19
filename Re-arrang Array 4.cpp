#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1001];
		int b[1001] = { 0 };
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);

		int dem = 0;
		for (int j = 0; j < n; j += 2)
		{
			b[j] = a[dem++];
		}
		for (int j = 1; j < n; j += 2)
		{
			b[j] = a[dem++];
		}
		for (int i = 0; i < n; i++) cout << b[i] << " ";
		cout << endl;
	}
}
