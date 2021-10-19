#include<iostream>
#include<math.h>
using namespace std;
long long fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0) {
        return -1;
    }
    else if (n == 0 || n == 1) {
        return n;
    }
    else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main()
{
	long long T;
	cin >> T;
	while (T--)
	{
		long long x;
		cin >> x;
		if (x < 0)
		{
			return 0;
		}
        long long s = 0;
        for (int i = 0; i < x; i++)
        {
           s= fibonacci(i);
           s += s;
        }
        cout << s;
		cout << endl;
	}
	return 0;
}