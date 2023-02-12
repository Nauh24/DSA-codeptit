#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll it = upper_bound(a, a + n, x) - a - 1;
        cout << it;
        cout << endl;
    }
    system("pause");
}