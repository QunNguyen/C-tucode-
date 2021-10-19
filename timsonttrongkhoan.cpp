#include<iostream>
#include<math.h>
using namespace std;
int snt(int n)
{
	
	if (n < 2)
	{
		return 0;
	}
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	if (a < 0 || b < 0)
	{
		return 0;
	}
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (snt(i))
			{
				cout << i << " ";
			}
		}
	}
	else
	{
		for (int i = b; i <= a; i++)
		{
			if (snt(i))
			{
				cout << i << " ";
			}
		}
	}
}