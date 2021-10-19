#include<iostream>
using namespace std;

void check(int N)
{
	long long a[100];
	int i = 0;
	while (N > 0)
	{
		a[i] = N % 10;
		i++;
		N = N / 10;
	}
	for (int j = 0; j < i; j++)
	{
		if (a[1] == 8 && a[0] == 6)
		{
			cout << 1;
			break;
		}
		else
		{
			cout << 0;
			break;
		}
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	int b[1000];
	for (int j = 1; j <= t; j++)
	{
		cin >> b[j];
	}
	for (int j = 1; j <= t; j++)
	{
		check(b[j]);
	}
}