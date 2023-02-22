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
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > 1)
            {
                cout << a[i];
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << "NO";
        cout << endl;
    }
    system("pause");
}