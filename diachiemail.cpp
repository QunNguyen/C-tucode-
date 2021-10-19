#include<iostream>
#include<string>
#include<string.h>
#include<math.h>
using namespace std;


int main()
{
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(65<=s[i]&&s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
	string a="";
	a+=s[0];
	int d;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			a+=s[i+1];
			d=i+1;
		}
	}
	for(int j=d;j<s.size();j++)
	{
		cout<<s[j];
	}
	for(int k=0;k<a.size()-1;k++)
	{
		cout<<a[k];
	}
	cout<<"@ptit.edu.vn";
}
