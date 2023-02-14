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
        ll a[n];
        set<ll> se;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        int ok = 0;
        if (se.size() == 1)
        {
            cout << -1;
            ok = 1;
        }
        vector<ll> v(se.begin(), se.end());
        if (!ok)
            cout << v[0] << " " << v[1];
        cout << endl;
    }
    system("pause");
}