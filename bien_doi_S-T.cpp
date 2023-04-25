#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int s, t;
        cin >> s >> t;
        queue<pair<ll, ll>> q;
        q.push({s, 0});
        map<ll, ll> mp;
        // memset(check, false, sizeof(check));
        while (1)
        {
            ll x = q.front().first;
            mp[x]++;
            ll y = q.front().second;
            q.pop();
            if (x == t)
            {
                cout << y << endl;
                break;
            }
            if (x < t && mp[x * 2] == 0)
                q.push({x * 2, y + 1});
            if (x > 0 && mp[x - 1] == 0)
                q.push({x - 1, y + 1});
        }
        cout << endl;
    }
    system("pause");
}