#include<iostream>
#include<algorithm>
using namespace std;

int sum(int a[], int bd,int kt)
{
	int S=0;
	for(int i=bd;i<=kt;i++)
	{
		S+=a[i];
	}
	return S;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int k;
		cin>>k;
		int a[1001];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		while(k--)
		{
			int d,c;
			cin>>d>>c;
			cout<<sum(a,d,c)<<endl;
		}
	}
}
