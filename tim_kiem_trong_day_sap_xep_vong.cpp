#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        ll idx;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == x)
            {
                idx = i + 1;
            }
        }
        cout << idx;
        cout << endl;
    }
    system("pause");
}