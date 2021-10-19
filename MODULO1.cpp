#include <iostream>
using namespace std;
int main() 
{
    int t; cin >> t;
    for (int j = 0; j < t; j++) 
    {
        long long x, y, p, i;
        cin >> x >> y >> p;
        long long s = 1;
        for (i = 0; i < y; i++)
        {
            s = s * x % p;
        }
        cout << s << endl;
    }
}