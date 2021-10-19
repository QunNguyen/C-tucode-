#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class sinhvien
{
	friend void sapxep(sinhvien[], int);
public:
	void hienthi()
	{
		cout << ID << " " << ten << " " << tuoi << " " << gioitinh << " " << diem;
	};

	void nhap();
	static void tangcount() { count++; };
private:
	int ID;
	string ten;
	int gioitinh, tuoi;
	float diem;
	static int count;
};

int sinhvien::count = 1000;
void sinhvien::nhap()
{
	ID = count;
	count++;
	cout << "ten= "; cin >> ten;
	do
	{
		cout << "gioi tinh = (1 la nam , 0 la nu)";
		cin >> gioitinh;
	} while (gioitinh < 0 || gioitinh>1);
	do
	{
		cout << "diem= ";
		cin >> diem;
	} while (diem < 0 || diem>10);
	do
	{
		cout << "tuoi= ";
		cin >> tuoi;
	} while (tuoi < 1);
}

void hienthids(sinhvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i].hienthi();
	}
}

void nhapds(sinhvien a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i].nhap();
	}
}
void sapxep(sinhvien a[], int n)
{
	int j;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				sinhvien temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int n;
	sinhvien sv[100];
	nhapds(sv, n);
	cout << "DS vua nhap" << endl;;
	hienthids(sv, n);
	sapxep(sv, n);
	cout << "DS da sap xep" << endl;
	hienthids(sv, n);
}