#include<iostream>
#include<math.h>
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
		int min=a[0]+a[1];
		int x;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				x=a[i]+a[j];
				if(abs(x)<abs(min))
				{
					min=x;
				}
			}
		}
		cout<<min<<endl;
	}
}
