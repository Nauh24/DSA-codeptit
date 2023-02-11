#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 123456789;
ll pown(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = pown(a, b / 2);
    ll y = (x * x) % mod;
    if (b % 2 == 1)
        return (y * a) % mod;
    else
        return y;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << pown(2, n - 1) << endl;
    }
    system("pause");
}