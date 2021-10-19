#include<iostream>
#include<algorithm>
using namespace std;

int kt(int a[], int n, int k)
{
	for(int i=0;i<n;i++)
	{
		if(k==a[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[10001];
		int b[10001]={0};
		long long n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int j=0;
		for(int i=0;i<n;i++)
		{
			while(a[i]>0)
			{
				int x=a[i]%10;
				if(kt(b,j,x)==1) 
				{
					b[j]=x;
					j++;
				}
				a[i]/=10;
			}
		}
		sort(b,b+j);
		for(int i=0;i<j;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
