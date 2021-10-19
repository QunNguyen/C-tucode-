#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[1001];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=k;i++)
		{
			int b,c;
			cin>>b>>c;
			int sum=0;
			for(int j=b;j<=c;j++)
			{
				sum+=a[j];
			}
			cout<<sum<<endl;
		}
	}
}
