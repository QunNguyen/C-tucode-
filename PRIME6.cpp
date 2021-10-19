#include<iostream>
#include<math.h>
using namespace std;

int snt(int n)
{
	if (n < 2) return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) return 0;
		}
	return 1;
}
void check(int n)
{	
	for (int i = 2; i <= n; i++)
	{
		if (snt(i) == 1 && snt(n - i) == 1)
		{
			cout << i << " " << n - i;
			break;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;
		check(N);
		cout << endl;
	}
}