#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << (n - 2) * (n - 1) + 1 << "\n";
    }
    return 0;
}
