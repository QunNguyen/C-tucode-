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
		int dem = 1; 
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == s[i - 1])
			{
				dem++;
			}
			else
			{
				cout << dem << s[i - 1];
				dem = 1;
			}
		}
		cout << dem << s[s.size() - 1];
		cout << endl;
	}
}
