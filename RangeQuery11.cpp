#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[1001];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<int> b;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int x=a[i]-a[j];
					b.push_back(x);
				}
				else
				{
					int x=a[j]-a[i];
					b.push_back(x);
				}
			}
		}
		sort(b.begin(),b.end());
		cout<<b[0]<<endl;
	}
}
