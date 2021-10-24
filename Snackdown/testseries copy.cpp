#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int a[5];
        int in = 0, en = 0, d = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            //cout << a[i] << " ";
            if (a[i] == 1)
            {
                in++;
            }
            else if (a[i] == 2)
            {
                en++;
            }
            else
            {
                d++;
            }
        }
        //cout << "\n"
          //   << in << " " << en << " " << d << endl;
        if (in == en)
        {
            cout << "DRAW\n";
        }
        else if (in > en)
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