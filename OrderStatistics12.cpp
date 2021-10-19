#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[100000];
		long long Max = 1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > 0 && a[i] == Max) Max++;
		}
		if (Max == n)cout << Max + 1 << endl;
		else cout << Max << endl;
	}
}