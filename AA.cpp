﻿#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b(n);
        int indez = 0;
        for (int i = 0; i < n; i += 2) {
            b[i] = a[indez++];
        }
        for (int i = 1; i < n; i += 2) {
            b[i] = a[indez++];
        }
        for (int i = 0; i < n; i++) cout << b[i] << " ";    
        cout << endl;
	}
}