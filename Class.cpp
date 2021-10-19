#include<iostream>
using namespace std;
#include<string.h>

class sinhvien
{
public:
	void nhapmasv();
	void nhaplop();
	void in();

private:
	string masv, lop;
};

void sinhvien::nhapmasv()
{
	cout << "Ma sinh vien la "; cin >> masv;
}

void sinhvien::nhaplop()
{
	cout << "Lop "; cin >> lop;
}
void sinhvien::in()
{
	cout << masv << " " << lop;
}

int main()
{
	sinhvien sv;
	sv.nhaplop();
	sv.nhapmasv();
	sv.in();

}