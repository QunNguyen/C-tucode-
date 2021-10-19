#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	/*
	ofstream file("C://Users//default.LAPTOP-DDVPA1B6//Desktop//file//quan1.txt", ios::out);
	if (!file)
	{
		cout << "ko mo duoc" << endl;
		return 1;
	}
	cout << "nhap ten sv ,ma sv ,lop" << endl;
	int acc;
	char tensv[30];
	double balance;
	while (cin >> acc >> tensv >> balance)
	{
		file << acc << tensv << balance;
		cout << "?";
	}
	*/
	istream file("C://Users//default.LAPTOP-DDVPA1B6//Desktop//file//quan1.txt", ios::in);

	return 0;
}
