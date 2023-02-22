#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        int ok = 0;
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            if (ok == 1)
                break;
            for (ll j = i + 1; j < n; j++)
            {
                if (binary_search(a.begin() + j + 1, a.end(), k - a[i] - a[j]))
                {
                    cout << "YES" << endl;
                    ok = 1;
                    break;
                }
            }
        }
        if (ok == 0)
            cout << "NO";
        // else
        //     cout << "YES";
        cout << endl;
    }
    system("pause");
}