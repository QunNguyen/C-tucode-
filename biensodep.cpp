#include<iostream>
using namespace std;


int checktang(string s)
{
	if(s[5]<s[6]&&s[6]<s[7]&&s[7]<s[9]&&s[9]<s[10]) return 1;
	return 0;
}

int checkbang(string s){
	if(s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10]) return 1;
	return 0;
}
int check3dau2cuoi(string s){
		if(s[5] == s[6] && s[6] == s[7]  && s[9] == s[10]) return 1;
		return 0;
}
int check6va8(string s){
	for(int i=5;i<s.size();i++){
		if(i!=8){
			if(s[i]!='6' && s[i] != '8'){
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(checktang(s)==1||checkbang(s)==1||check3dau2cuoi(s)==1||check6va8(s)==1)
		{
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	
	}
	
}

