#include<bits/stdc++.h>
using namespace std;
int main()
{	
		int n;
		cin >>n;
		string s[n];
		cin.ignore();
		for(int i=0;i<n;i++)
		{
			getline(cin,s[i]);
		}
		sort(s,s+n);
		int dem = 0;
		for(int i=0;i<n-1;i++)
		{
			if(s[i] != s[i+1]) dem++;
		}
		if(dem!=0) dem ++;
		cout << dem << endl;
	
}

