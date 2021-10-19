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
		int N;
		cin >> N;
		NhapMaTran(a , N);
		for (int i = 0;i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i == 0 || j == 0 || i == N - 1 || j == N - 1)
				{
					cout << a[i][j] << " ";
				}
				else cout << " "<<" ";
			}
			cout << endl;
		}
	}
	return 0;
}