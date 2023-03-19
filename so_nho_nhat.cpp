#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int sum, d;
        cin >> sum >> d;
        if (sum / 9 > d)
        {
            cout << -1 << endl;
            continue;
        }
        // s -= 1;
        // d -= 1;
        // int q = s / 9;
        // int r = s % 9;
        // if (q == d)
        // {
        //     cout << r + 1;
        //     for (int i = 0; i < q; i++)
        //         cout << 9;
        // }
        // else
        // {
        //     cout << 1;
        //     for (int i = 0; i < d - q - 1; i++)
        //         cout << 0;
        //     cout << r;
        //     for (int i = 0; i < q; i++)
        //         cout << 9;
        // }

        // cách 2
        string s = string(d, '0');
        for (int i = d - 1; i >= 0; i--)
        {
            if (sum > 9)
            {
                s[i] = '9';
                sum -= 9;
            }
            else
            {
                if (i == 0)
                    s[i] = char(sum + '0');
                else
                {
                    s[0] = '1';
                    s[i] = char(sum - 1 + '0');
                }
                break;
            }
        }
        cout << s;
        cout << endl;
    }
    system("pause");
}
/*
9 2
18
20 3
299
20 5
10199
30 5
12999
*/