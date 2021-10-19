#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		string s;
		getline(cin,s);
		int x=0,dem=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]<'a'||s[i]>'z'||s[i]<'A'||s[i]>'Z')
			{
				x++;
			}
		}
		cout<<x<<endl;
	}
}
