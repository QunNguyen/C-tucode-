#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin.ignore();
		string s;
		getline(cin, s);
		int dem = 1;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
}
