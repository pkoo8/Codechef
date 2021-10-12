#include <iostream>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << 100 << endl;
    }
    int x = 1;
    for (int i = 0; i < m; i++)
    {
        if (a[i] == 0)
        {
            x = 0;
        }
    }
    if (x && count != n)
    {
        cout << k << endl;
    }

    if (x == 0 && count < n)
    {
        cout << 0 << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}