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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i != j)
                {
                    if (abs(s[j] - s[i]) == j - i)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}