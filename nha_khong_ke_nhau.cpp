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
        int n;
        cin >> n;
        ll a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ll d[n + 1];
        memset(d, 0, sizeof(d));
        d[1] = a[1];
        for (int i = 2; i <= n; i++)
        {
            d[i] = max(d[i - 1], d[i - 2] + a[i]);
        }
        cout << d[n];
        cout << endl;
    }
    system("pause");
}