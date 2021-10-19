#include <iostream>
using namespace std;

void nhap(int a[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
}
void in(int a[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void danhdau(int a[100][100], int m, int n) {
	int row[100];
	int col[100];
	for (int i = 0; i < m; i++) {
		row[i] = 0;
	}
	for (int j = 0; j < n; j++) {
		col[j] = 0;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (row[i] == 1 || col[j] == 1) {
				a[i][j] = 1;
			}
		}
	}
	in(a, m, n);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[100][100];
		int n, m;
		cin >> n >> m;
		nhap(a, n, m);
		danhdau(a, n, m);
		cout << endl;
	}
}