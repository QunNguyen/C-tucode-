#include <iostream>
#include <math.h>
using namespace std;

int mu(long long n)
{
    long long x = sqrt(n);
    if (x * x == n) return 1;
    else return 0;
}

long long cong(long long n) {
    long long sum = 0;
    for (long i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            sum += (n / i);
        }
    }
    if (mu(n) == 1) sum += sqrt(n);
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long sum = cong(n);
        cout << sum << endl;
    }
    return 0;
}
