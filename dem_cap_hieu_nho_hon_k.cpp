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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll cnt = 0;
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            auto it = lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - a.begin();
            cnt += it - i - 1;
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}