#include<iostream>
#include<math.h>
using namespace std;
int snt(int n)
{

	if (n < 2)
	{
		return 1;
	}
	else
		for (long long i = 2; i <= sqrt(n); i++)
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
		int a; 
		cin >> a;
		for (int i = 1; i < a; i++)
		{
			if (snt(i) == 1)
			{
				cout << i << " ";
			}
			else
			{
				for (int j = 2; j<=i/2; j++)
				{
					if (snt(j) == 1)
					{
						if (i%j==0)
						{
							cout<<j<<" ";
						}
					}
				}
			}
		}
		cout << endl;
	}
}