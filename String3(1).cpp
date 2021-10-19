#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long sum=0;
		for(int i=s.length();i>=0;i--)
		{
			if(s[i]=='1')
			{
				int x=pow(2,i);
				sum+=x;
			}
		}
		if(sum%5==0)
		{
			cout<<"Yes";
		}
		else cout<<"No";
		cout<<endl;
	}
}
