#include<iostream>
using namespace std;

void nhapmang(long long a[], int n)
{
	for (int i = 0; i <n; i++)
	{
		cin >> a[i];
	}
}

void sapxep(long long a[], int n)
{
	int tg;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

int main()
{
	long long a[1000], T;
	int N;
	cin >> T;
	while (T--)
	{
		cin >> N;
		nhapmang(a, N);
		sapxep(a, N);
		for (int i = 0; i < N; i++)
		{
			if (a[0] != a[1])
			{
				cout << a[0] << " " << a[1];
			}
			else
			{
				cout << -1;
			}
			break;
		}
		cout << endl;
	}
	return 0;
}