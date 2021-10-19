#include <bits/stdc++.h>
using namespace std;
long long solve(vector<long long> C, long long a)
{
	for (long long i = a - 1; i >= 0; i--)
	{
		long long l = 0;
		long long r = i - 1;
		long long tl = 0, tr = 0;
		while (l < r)
		{
			if (C[r] * C[r] + C[l] * C[l] > C[i] * C[i]) r--;
			else if (C[r] * C[r] + C[l] * C[l] < C[i] * C[i]) l++;
			else return true;
		}
	}
	return false;
}
signed main()
{
	long long N;
	cin >> N;
	while(N--)
	{
		long long a;
		cin >> a;
		vector<long long> C(a);
		for (long long i = 0; i < a; i++) cin >> C[i];
		sort(C.begin(), C.end());
		if (solve(C, a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

