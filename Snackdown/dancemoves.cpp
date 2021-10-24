#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int d = (b - a);
        if (d > 0)
        {
            if (d % 2)
            {
                cout << (d + 1) / 2 + 1 << endl;
            }
            else
            {
                cout << d / 2 << endl;
            }
        }
        else
        {
            cout << -d << endl;
        }
    }
    return 0;
}