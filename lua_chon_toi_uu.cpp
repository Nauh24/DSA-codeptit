#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.second < b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            cin >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        ll time = v[0].second;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= time)
            {
                cnt++;
                time = v[i].second;
            }
        }
        cout << cnt;
        cout << endl;
    }

    system("pause");
}