#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll n;
ll dao(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        int x = n % 10;
        n /= 10;
        sum = sum * 10 + x;
    }
    return sum;
}
ll pow(ll n, ll x)
{
    if (x == 0)
        return 1;
    ll k = pow(n, x / 2);
    ll y = (k * k) % mod;
    if (x % 2 == 1)
        return (n * y) % mod;
    else
        return y;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        ll x = dao(n);
        cout << pow(n, x);
        cout << endl;
    }
    system("pause");
}