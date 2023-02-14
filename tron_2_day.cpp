#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll a[n], b[m];
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}