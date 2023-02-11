#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll k;
ll mod = 1e9 + 7;
ll pow(ll n, ll k)
{
    if (k == 0)
    {
        return 1;
    }
    ll x = pow(n, k / 2);
    ll y = (x * x) % mod;
    if (k % 2 == 1)
    {
        return (n * y) % mod;
    }
    else
    {
        return y;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << pow(n, k);
        cout << endl;
    }
    system("pause");
}