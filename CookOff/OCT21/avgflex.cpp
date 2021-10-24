#include <bits/stdc++.h>
using namespace std;
bool boast(int i, int a[], int n)
{
    int less = 0, more = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] <= a[i])
        {
            less++;
        }
        else
        {
            more++;
        }
    }
    return less > more;
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (boast(i, a, n))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}