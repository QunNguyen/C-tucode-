#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ;i++) cin >> a[i];
		map<int, int> m;
		for(int i=0 ; i<n ; i++){
			m[a[i]]++;
		}
		int ans = 0;
		map<int,int>::iterator it;
		for(it=m.begin() ; it!=m.end() ; it++){
			if(it->second > 1){
				ans += it->second;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

