#include <iostream>
#define ll long long;
using namespace std;
int main()
{
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
            if (a[i] == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << a[i] - i << " ";
            }
        }
        cout << endl;
    }
}