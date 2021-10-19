#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
    cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		vector<string>myv;
		while(ss>>word)
			myv.push_back(word);
		int Odd=0,Even=0;
        int n = myv.size();
		for(int i=0;i<myv.size();i++){
			int x = stoi(myv[i]);
            if(x%2==0)
                Even++;
            else
                Odd++;
		}
		if((n%2==0 && Even > Odd)||(n%2==1 && Odd>Even)) 
            cout<<"YES";
		else 
            cout<<"NO";
		cout<<endl;
	}
	return 0;
}

