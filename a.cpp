#include<iostream>
using namespace std;

class diem
{
public:
	void nhap();
	void hienthi();
private:
	int x, y;
};
void diem::nhap()
{
	cout << "toa do x la: "; cin >> x;
	cout << "toa do y la: "; cin >> y;
}
void diem::hienthi()
{
	cout << "toa do tam" << "(" << x << "," << y << ")" << endl;
}

class hinhtron :public diem
{
public:
	void chuvi();
	void dientich();
	void nhapbankinh()
	{

		cout << "ban kinh: ";
		cin >> r;
	};
private:
	int r;
};
void hinhtron::chuvi()
{
	cout << "chu vi hinh tron: " << "2*pi*"<<r << endl;;
}
void hinhtron::dientich()
{
	cout << "dien tich: " << "pi*"<<r<<"*"<<r<<endl;
}

class tamgiac
{
public:
	void dinh();
	void hienthi();
private:
	diem d1, d2, d3;
};
void tamgiac::dinh()
{
	cout << "nhap 3 dinh: " << endl;
		d1.nhap();
		d2.nhap();
		d3.nhap();
}
void tamgiac::hienthi()
{
	cout << "chuvi" << endl;
	cout << "dientich" << endl;
 }

int main()
{
	hinhtron h;
	tamgiac t;
	h.nhap();
	h.nhapbankinh();
	h.hienthi();
	h.dientich();
	h.chuvi();
	t.dinh();
	t.hienthi();
}