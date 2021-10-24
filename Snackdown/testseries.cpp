#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n][5];
    int res[n];
    for (int i = 0; i < n; i++)
    {
        int cnt[3];
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            cnt[arr[i][j]]++;
        }
        if (cnt[1] == cnt[2])
        {
            res[i] = 0;
        }
        else
        {
            res[i] = max(cnt[1], cnt[2]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
        if (res[i] == 0)
        {
            cout << "DRAW\n";
        }
        else if (res[i] == 1)
        {
            cout << "INDIA\n";
        }
        else
        {
            cout << "ENGLAND\n";
        }
    }
    return 0;
}