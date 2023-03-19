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
        int n;
        cin >> n;
        int ok = 0;
        for (int s7 = n / 7; s7 >= 0; s7--)
        {
            if ((n - s7 * 7) % 4 == 0)
            {
                int s4 = (n - s7 * 7) / 4;
                for (int i = 0; i < s4; i++)
                    cout << 4;
                for (int i = 0; i < s7; i++)
                    cout << 7;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << -1;
        cout << endl;
    }
    system("pause");
}