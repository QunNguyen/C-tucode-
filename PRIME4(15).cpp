#include<iostream>
#include<math.h>
using namespace std;

void in(int n)
{
	int i, j;
	cout << 1 << " ";
	for (i = 1; i <= n; i++) 
	{
		for (j = 2; j <= n; j++)
		{
			if (i % j == 0)
			{
				cout << j << " ";
				break;
			}
		}
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		in(n);
		cout << endl;
	}
}
