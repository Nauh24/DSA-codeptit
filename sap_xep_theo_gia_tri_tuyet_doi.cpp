#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x;
bool cmp(ll a, ll b)
{

    // if (abs(x - a) != abs(x - b))
    return abs(x - a) < abs(x - b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    system("pause");
}