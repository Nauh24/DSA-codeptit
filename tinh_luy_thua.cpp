#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b;
ll mod = 1e9 + 7;
ll Pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = Pow(a, b / 2);
    ll y = (x * x) % mod;
    if (b % 2 == 1)
    {
        return (y * a) % mod;
    }
    else
        return y;
}
int main()
{
    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << Pow(a, b);
        cout << endl;
    }
    system("pause");
}