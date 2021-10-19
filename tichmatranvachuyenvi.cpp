#include<iostream>
using namespace std;
int n,m; 

int a[50][50],b[50][50],c[50][50];

void tinhTich(){
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		b[j][i] = a[i][j]; 
	} 
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			for(int k = 1;k <= m;k++) 
				c[i][j] += a[i][k] * b[k][j];	
		} 
	} 
} 

int main(){
	int t;
	cin>>t;
	for(int h = 1;h <= t;h++)
	{
		cin >> n >> m;
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= m;j++) 
			{
				cin >> a[i][j];
			}
		} 
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= n;j++) 
				{
				c[i][j] = 0;
			} 
		}
		tinhTich();
		cout<<"Test "<< h <<":" << endl;
		for(int i = 1;i <= n;i++) 
		{
			for(int j = 1;j <= n;j++) 
			{
				cout << c[i][j] << " ";
			}
			cout << endl; 
		} 
		cout << endl; 
	} 
}

