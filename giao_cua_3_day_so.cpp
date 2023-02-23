#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        ll a[n], b[m], c[k];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        for (int l = 0; l < k; l++)
            cin >> c[l];
        multiset<ll> se;
        // vector<ll> se;
        int i = 0, j = 0, l = 0;
        while (i < n && j < m && l < k)
        {
            if (a[i] == b[j] && b[j] == c[l])
            {
                se.insert(a[i]);
                i++;
                j++;
                l++;
            }
            else if (a[i] < b[j])
                i++;
            else if (b[j] < c[l])
                j++;
            else
                l++;
        }
        if (se.size() == 0)
            cout << -1;
        else
        {
            for (auto it : se)
                cout << it << " ";
        }
        cout << endl;
    }
    system("pause");
}