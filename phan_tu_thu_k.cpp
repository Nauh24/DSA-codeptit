#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + m];
        for (ll i = 0; i < n + m; i++)
            cin >> a[i];
        sort(a, a + n + m);
        cout << a[k - 1];
        cout << endl;
    }
    system("pause");
}