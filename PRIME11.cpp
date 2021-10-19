#include<iostream>
using namespace std;

int isPerfect(long long number, long long arr[])
{
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == number) return 1;
	}
	return 0;
}

int main()
{
	int t;
	cin >> t;
	long long arr[7] = { 6,28,496,8128,33550336,8589869056,137438691328 };
	while (t--)
	{
		long long n;
		cin >> n;
		cout << isPerfect(n, arr);
		cout << endl;
	}
}
