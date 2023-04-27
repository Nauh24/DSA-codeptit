#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 100005;
int n, m;
ll pos[MAXN];

bool check(ll val)
{
    int cnt = 1;
    ll last = pos[0];
    for (int i = 1; i < n; i++)
    {
        if (pos[i] - last >= val)
        {
            cnt++;
            last = pos[i];
        }
        if (cnt == m)
            return true;
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }
    sort(pos, pos + n);

    ll l = 0, r = 1e9 + 5, res = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << res << endl;
    system("pause");
    return 0;
}
