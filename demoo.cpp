#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int a[10001];
		vector<int> b;
		b.push_back(0);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int x=a[i]+a[j];
				b.push_back(x);
			}
		}
		sort(b.begin(),b.end());
		for(int i=0;i<b.size();i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
