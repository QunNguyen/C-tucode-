#include<iostream>
using namespace std;

string sumDigit(string s)
{
	string rs;
	long long sum=0;
	for ( int i=0 ; i<s.size() ; i++)
	sum += s[i]-'0';
	ostringstream convert;
	convert << sum;
	rs = convert.str();
	return rs;
}
int main() 
{
	string s;
	int count=0;
	cin >> s;
	if ( s.size() == 1 ) count = 1;
	else 
	{
		while ( s.size() != 1 )
		{
			s = sumDigit(s);
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
