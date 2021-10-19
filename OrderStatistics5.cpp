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
		cin>>n;
		int a[10001];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max=0;
		int dem=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(i<j&&a[i]<a[j])
				{
					int x=a[j]-a[i];
					if(x>max) max=x;
					dem++;
				}
			}
		}
		if(dem==0) cout<<-1;
		else cout<<max;
		cout<<endl;
	}
	
}
