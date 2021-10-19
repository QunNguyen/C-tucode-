#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m],b[n][m]={0};
		for(int i =0;i<n; i++){
			for(int j=0;j<n;j++){
				cin>> a[i][j];
			}
		}
		int cotdau=0, cotcuoi= m-1, hangdau=0, hangcuoi =n-1;
		int dem=0;
		while(true){
			for(int i= cotdau;i <cotcuoi; i++){
				b[hangdau][i+1]=a[hangdau][i];
				dem++;
			}
			for(int i=hangdau;i< hangcuoi; i++){
				b[i+1][cotcuoi]=a[i][cotcuoi];
				dem++;
			}
			for(int i=cotcuoi;i> cotdau;i--){
				b[hangcuoi][i-1]=a[hangcuoi][i];
				dem++;
				
			}
			for(int i=hangcuoi;i>hangdau;i--){
				b[i-1][cotdau]=a[i][cotdau];
			}
			hangdau++;hangcuoi--;cotdau++;cotcuoi--;
			if(dem>=m*n) break;
			if(dem==n*m-1 & dem==n*m & n%2==1 ){
				b[n/2][n/2]=a[n/2][m/2];
				break;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<b[i][j]<<" ";
			}
		
	}
	cout<<endl;
	}
}

