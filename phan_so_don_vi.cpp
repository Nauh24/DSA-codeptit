#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll p, q;
        cin >> p >> q;
        while (1)
        {
            if (q % p == 0)
            {
                cout << 1 << "/" << q / p << endl;
                break;
            }
            ll x = q / p + 1;
            cout << "1/" << x << " + ";
            p = p * x - q;
            q *= x;
        }

        cout << endl;
    }
    system("pause");
}