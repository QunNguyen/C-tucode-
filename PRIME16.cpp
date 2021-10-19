#include<iostream>
#include<math.h>
using namespace std;

int snt(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) return 0;
		}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		int dem = 0;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (snt(i) == 1)
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
}
