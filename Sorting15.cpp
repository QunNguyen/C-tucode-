#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int k;
		cin>>n>>k;
		int a[10001];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int x=a[i]-a[j];
				int y=a[j]-a[i];
				if(x>0&&x<k)
				{
					dem++;
				}
				if(y>0&&y<k)
				{
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
