#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll P[50];
// tim bac cua n
ll Pow(ll n)
{
    ll res = 1;
    ll cnt = 0;
    while (res <= n)
    {
        res *= 2;
        cnt++;
    }
    return cnt - 1;
}
// tim xem vi tri la 0 hay 1
int Find(ll n, ll bac, ll vt)
{
    ll x = P[bac];
    if (vt == x)
        return n % 2;
    if (vt < x)
        return Find(n / 2, bac - 1, vt);

    return Find(n / 2, bac - 1, vt - x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    P[0] = 1;
    for (int i = 1; i <= 50; i++)
    {
        P[i] = P[i - 1] * 2;
    }
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        ll cnt = 0;
        ll bac = Pow(n);
        ll x = P[bac];
        // cout << x;
        for (ll i = l; i <= r; i++)
        {
            if (Find(n, bac, i) == 1)
                cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}