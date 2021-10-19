#include<iostream>
using namespace std;



int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long  K, N;
		cin >> N >>K;
		long long  S = 0;
		for (int i = 1; i <=N; i++)
		{
			S = S + (i % K);
		}
		cout << S;
		cout << endl;
	}
	return 0;
}