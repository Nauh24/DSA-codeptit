#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll f[2][2], d[2][2];
void ktao()
{
    f[0][0] = f[0][1] = f[1][0] = 1;
    f[1][1] = 0;
    d[0][0] = d[0][1] = d[1][0] = 1;
    d[1][1] = 0;
}
void Mul(ll a[2][2], ll b[2][2])
{
    ll x = (a[0][0] * b[0][0] % mod + a[0][1] * b[1][0] % mod) % mod;
    ll y = (a[0][0] * b[0][1] % mod + a[0][1] * b[1][1] % mod) % mod;
    ll z = (a[0][1] * b[0][0] % mod + a[1][1] * b[1][0] % mod) % mod;
    ll t = (a[0][1] * b[0][1] % mod + a[1][1] * b[1][1] % mod) % mod;
    f[0][0] = x;
    f[0][1] = y;
    f[1][0] = z;
    f[1][1] = t;
}
void Pown(ll f[2][2], ll n)
{
    if (n <= 1)
        return;
    Pown(f, n / 2);
    Mul(f, f);
    if (n % 2 == 1)
        Mul(f, d);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ktao();
        Pown(f, n - 1);
        cout << f[0][0];
        cout << endl;
    }
    system("pause");
}