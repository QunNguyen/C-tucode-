#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long N, K;
		long long S = 0;
		cin >> N >> K;
		for (int i = 1; i <= N; i++)
		{
			S = S + (i % K);
		}
		if (S == K)
		{
			cout << 1;
		}
		else cout << 0;
		cout << endl;
	}
}