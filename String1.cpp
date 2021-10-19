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
		int k;
		cin >> k;
		bool check[1000] = { false };
		for (int i = 0; i < s.length(); i++)
		{
			check[s[i]] = true;
		}
		int dem = 0;
		for (int i = 'a'; i <= 'z'; i++)
		{
			if (!check[i])
			{
				dem++;
			}
		}
		if (dem <= k)
		{
			cout << 1;
		}
		else cout << 0;
		cout << endl;
	}
}