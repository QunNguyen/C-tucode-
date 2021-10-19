#include<iostream>
#include<string>
using namespace std;

bool check(string s, int k)
{
	if (s.length() < 26)
	{
		return false;
	}
	int diachi[26];
	for (int i = 0; i < s.length(); i++)
	{
		diachi[s[i] - 'a'] = true;
	}
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (!diachi[i])
		{
			count += 1;
		}
	}
	if (count <= k)
	{
		return true;
	}
	return false;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = s[i] - '0';
		}
		int chan = 0;
		int le = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (i % 2 == 0)
			{
				chan += s[i];
			}
			else le += s[i];
		}
		int tong = le - chan;
		if (tong % 11 == 0)
		{
			cout << 1;
		}
		else cout << 0;
		cout << endl;
	}
}