#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int dem[1001] = { 0 };
		for (int i = 0; i < s.size(); i++)
		{
			dem[s[i]]++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (dem[s[i]] <2)
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
}
