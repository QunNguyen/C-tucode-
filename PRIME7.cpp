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


bool check(int n) 
{
	int dem = 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (snt(i))
			{
				int d = 0;
				while (n % i == 0)
				{
					d++;
					dem++;
					n = n / i;
				}
				if (d > 1) return false;
			}
		}
	}
	if (n != 1 && snt(n)) dem++;
	if (dem == 3) return true;
	else return false;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;
		if (check(N)==true) cout << 1;
		else cout << 0;
		cout << endl;
	}
}


