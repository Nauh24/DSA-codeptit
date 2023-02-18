#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll x = k - a[i] - a[j];
                auto it = lower_bound(a + j + 1, a + n, x) - a;
                cnt += (it - j - 1);
            }
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}