#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int am(int n)
{
	if(n<0)
	{
		n=n*-1;
	}
	return n;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int a[10001];
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
		}
	
		sort(a,a+n);
		int tru=a[0]-a[1];
		int min =am(tru);
		for(long long i=0;i<n-1;i++)
		{
			int b=a[i]-a[i+1];
			int x=am(b);
			if(x<min)
			{
				min=x;
			}
		}
		cout<<min<<endl;
	}
}

