#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<ll>());
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i] * b[i];
        }
        cout << sum;
        cout << endl;
    }
    system("pause");
}