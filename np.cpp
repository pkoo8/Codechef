#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<int, int> sum;
        map<int, int> diff;
        for (int i = 0; i < n; i++)
        {
            sum[i + (s[i] - 48)]++;
            diff[i - (s[i] - 48)]++;
        }
        int count = 0;
        for (auto it = sum.begin(); it != sum.end(); it++)
        {
            count += ((it->second) * (it->second - 1)) / 2;
        }
        for (auto it = diff.begin(); it != diff.end(); it++)
        {
            count += ((it->second) * (it->second - 1)) / 2;
        }
        cout << count << endl;
    }
    return 0;
}