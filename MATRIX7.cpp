#include<iostream>
using namespace std;

void NhapMaTran(long long a[][100], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
}


int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long a[100][100];
		int n;
		cin >> n;
		NhapMaTran(a, n);
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
			}
			else {
				for (int j = n - 1; j >= 0; j--) {
					cout << a[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
