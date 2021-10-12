#include <bits/stdc++.h>
#include <sstream>
#include<cstdio>
#define int long long
using namespace std;
long long fast_atoi(const string &s)
{
    int n = s.length();
    int i = 0;
    long long val = 0;
    while (i < n)
    {
        val = val * 10 + (s[i] - '0');
        i++;
    }
    //cout << val << endl;
    return val;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    scanf(%lld,&t);
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            ostringstream str1;
            str1 << a[i];
            s[i] = str1.str();
        }
        //int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                unsigned long long x = fast_atoi(s[i] + s[j]);
                if (x >= l && x <= r)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}