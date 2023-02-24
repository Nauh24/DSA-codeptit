#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll minn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            ll res = abs(a[i] - a[i - 1]);
            minn = min(minn, res);
        }
        cout << minn;
        cout << endl;
    }
    system("pause");
}