#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<"INVALID"<<endl;
            continue;
        }

        bool next = false;
        for(int i=0;i<s.size();i++){
            if(s[i]<'0'||s[i]>'9') {cout<<"INVALID"<<endl;next=true;break;}
        }
        if(next)continue;


        bool d[10];
        for(int i=0;i<10;i++)d[i]=false;
        for(int i=0;i<s.size();i++){
            int convert = s[i]-'0';
            d[convert]=true;
        }

        bool ok = true;
        for(int i=0;i<=9;i++){
            if(d[i]==false)ok = false;
        }

        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

