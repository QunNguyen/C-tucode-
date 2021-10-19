#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void mang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> first;
		vector<int> second;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			first.push_back(x);
		}
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			second.push_back(x);
		}
		std::vector<int> v(m + n);
		std::vector<int> t(m + n);
		std::vector<int>::iterator it;
		std::vector<int>::iterator itt;

		sort(first.begin(), first.end());
		sort(second.begin(), second.end());

		it = std::set_union(first.begin(), first.end(), second.begin(), second.end(), v.begin());
		v.resize(it - v.begin());

		itt = std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), t.begin());
		t.resize(itt - t.begin());


		for (it = v.begin(); it != v.end(); ++it)
			std::cout << *it << " ";

		cout << endl;

		for (itt = t.begin(); itt != t.end(); ++itt)
			std::cout << *itt << " ";
		cout << endl;
	}
}