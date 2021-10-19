#include<iostream>
#include<iomanip>
using namespace std;

void Tao( int a[], int &n ){ // khoi tao cac gia tri cho n, a[i].
	cout<<"\nNhap n: ";
	cin>> n;
	for(int i = 1; i <= n; i++ ) 
		a[i] = i; 
}

int sinh( int a[], int n, int &ok ){
	int i = n- 1; // xuat phat tu vi tri n-1
	while( i > 0 && a[i] > a[i+1] ) i--; // tìm a[i] dau tien > a[i+1]
	if( i > 0 ){
		int k = n; // xuat phat tu phan tu cuoi
		while( a[i] > a[k] ) k--; // tim a[k] dau tien thoa man a[k] > a[i]
		int t = a[i]; a[i] = a[k]; a[k] = t; // doi cho a[i] & a[k]
		int r = i + 1, s = n;
		while( r <= s ){ // dao vi tri cac phan tu a[i+1] toi a[n]
			int tg = a[r]; a[r] = a[s]; a[s] = tg;
			r++; s--;
		}
	}
	else ok = 0; // ok = 0 khi ch??ng trinh da sinh du n! hoan vi khac nhau
}

void xuat( int a[], int n ){ // xuat tung hoan vi ra man hinh
	for( int i = 1; i <= n; i++ )
		cout<< setw( 3 ) << a[i];
	cout<< endl;
}

void next( int a[], int n, int ok ){
	while( ok ){
		xuat( a, n ); // xuat du lieu
		sinh( a, n, ok ); // sinh hoan vi ke tiep tu hoan vi hien tai
	}
}

int main(){
	int a[100], n, ok =1; // khoi tao ok = 1
	Tao( a, n );
	next( a, n, ok );
	return 0;
}
