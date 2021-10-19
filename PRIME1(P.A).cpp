#include<iostream>
using namespace std;
void snt(long long n)
{
	long long x = n;
	for (long long i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			x /= i;
			cout << i << " ";
			i--;
		}
	}
	if (x == n)
	{
		cout << x;
		return;
	}
	if (x != 1)
	{
		return snt(x);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		snt(n);
		cout << endl;
	}
	return 0;
}