#include<iostream>
#include<string.h>
using namespace std;
void check(string b)
{
	int a = b.length();
	if (b[a - 1] == 54 && b[a - 2] == 56)
	{
		cout << 1;
	}
	else cout << 0;
	cout << endl;
}

int main()
{
	int t;
	cin>> t;
	string b;
	for (int i = 0; i < t; i++)
	{
		cin >> b;
		check(b);
	}
	
}