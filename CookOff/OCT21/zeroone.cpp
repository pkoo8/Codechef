#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> zo;
        vector<int> z;
        vector<int> o;

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i % 2)
            {
                o.push_back(x);
            }
            else
            {
                z.push_back(x);
            }
        }
        sort(z.begin(), z.end());
        sort(o.begin(), o.end());
        int n1 = z.size();
        int n2 = o.size();
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                zo.push_back(o[--n2]);
            }
            else
            {
                zo.push_back(z[--n1]);
            }
            cout << zo[i] << " ";
        }
        cout << "\n";
        int ans = 0;
        int i = 0, j = 1;
        while (i < n)
        {
            if (j > n)
            {
                i = i + 2;
                j = i + 1;
            }
            else
            {
                ans += zo[i] * zo[j];
                j = j + 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}