#include<iostream>
#include<string>
#include<stack>
using namespace std;

int rt(int n)
{
	int b = 0;
	while (n > 0)
	{
		b += n % 10;
		n /= 10;
	}
	if (b < 10) return b;
	else return rt(b);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << rt(n) << endl;
	}
}
