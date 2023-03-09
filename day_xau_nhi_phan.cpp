#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll f[93];
void NhiPhan(ll n, ll k)
{
    if (n == 1)
    {
        cout << 0;
        return;
    }
    if (n == 2)
    {
        cout << 1;
        return;
    }
    if (k <= f[n - 2])
    {
        NhiPhan(n - 2, k);
    }
    else
    {
        NhiPhan(n - 1, k - f[n - 2]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[1] = 1;
    f[2] = 1;
    for (ll i = 3; i <= 92; i++)
    {
        f[i] = f[i - 2] + f[i - 1];
    }
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        NhiPhan(n, k);
        cout << endl;
    }
    system("pause");
}