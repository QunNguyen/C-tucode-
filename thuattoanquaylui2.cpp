#include<iostream>
#include<iomanip>
using namespace std;

void nhap( int &n, int &k ){ 	// tham chieu toi n, k de thay doi gia tri cho n, k
	cout<<"\nNhap n, k: "; // trong toan bo chuong trinh.
	cin>> n >> k;
}

void xuat( int a[], int k ){
	for( int i =1; i<= k; i++ )
		cout<< setw( 5 ) << a[i]; // danh 5 vi tri de in k phan tu cua mang a[].
	cout<< endl;
}

void next( int i, int a[], int n, int k ){
	for( int j = a[i - 1] +1; j <= n- k + i; j++ ){ // j se nhan gia tri gioi han
		a[i] = j;									// tu 1 toi n.
		if( i == k ) xuat( a, k ); // kiem tra lieu co xuat to hop ra?
		else next( i + 1, a, n, k ); // tim & sinh phan tu tiep theo cua to hop.
	} 
}


int main(){
	int a[100] ={}, n, k; // mac dinh se khoi tao cac phan tu 
						  //a[i], n, k có gia tri 0
	nhap(n,k);
	next(1,a,n,k);
	return 0;
}
