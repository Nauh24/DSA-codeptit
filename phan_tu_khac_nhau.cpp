#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n - 1];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            // mp[b[i]] = 1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cout << i + 1;
                break;
            }
        }
        cout << endl;
    }
    system("pause");
}