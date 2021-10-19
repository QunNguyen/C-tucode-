#include<iostream>
using namespace std;

void nhapmang(long long a[], int n)
{
	for (int i = 0; i < n; i++)
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
			if (a[i] < a[j])
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
	long long a[100000], t;
	int N, M;
	cin >> t;
	while (t--)
	{
		cin >> N >> M;
		nhapmang(a, N);
		sapxep(a, N);
		for (int i = 0; i < M; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}