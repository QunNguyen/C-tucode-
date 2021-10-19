#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string number;
		cin >> number;
		long long sum = 0;
		long long b = number.length() - 1;
		for (int i = 0; i < number.length(); i++)
		{
			int a = number[i] - '0';
			int so = a * pow(2, b);
			b--;
			sum += so;
		}
		if (sum % 5 == 0)
		{
			cout << "Yes";
		}
		else cout << "No";
		cout << endl;
	}
}

/*
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		long long r = 0, h = 0;
		for (int i = 0; i < s.size(); i++) {
			int t = s[i] - '0';
			r = (2 * r + t) % 5;
			h = r;
		}
		if (h % 5 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
*/