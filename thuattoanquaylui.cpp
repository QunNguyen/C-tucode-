#include<iostream>
using namespace std;
#define MAX 20


int n;
int Bool[MAX] = { 0 };//?�nh d?u ch?a c� ph?n t? n�o s? d?ng h?t
int A[MAX];//L?u ho�n v? v�o m?ng A

void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}

void Try(int k) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? ch?a ???c ch?n th� s? ?�nh d?u
        if (!Bool[i]) {
            A[k] = i; // L?u m?t ph?n t? v�o ho�n v?
            Bool[i] = 1;//?�nh d?u ?� d�ng
            if (k == n)//Ki?m tra n?u ?� ch?a m?t ho�n v? th� xu?t
                xuat();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}

int main() {
    cout << "Mhap n: ";
    cin >> n;
    Try(1);
}