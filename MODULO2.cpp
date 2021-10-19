#include <iostream>
using namespace std;
void module(int n)
{

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        int dem = 0;
        for (int i = 0; i < m; i++) {
            if ((i * a) % m == 1) {
                cout << i << endl;
                break;
            }
            else dem++;
        }
        if (dem == m) cout << "-1" << endl;
    }
    cout << endl;
}