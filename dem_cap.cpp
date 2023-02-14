#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[5];
int count(int a[], int n, int x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return cnt[0];
    int res = cnt[0] + cnt[1];
    auto it = upper_bound(a, a + n, x) - a;
    res += n - it;
    if (x == 2)
        res -= (cnt[3] + cnt[4]);
    if (x == 3)
        res += cnt[2];
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
            if (b[j] < 5)
            {
                cnt[b[j]]++;
            }
        }
        sort(b, b + m);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += count(b, m, a[i]);
        }
        cout << ans;
        memset(cnt, 0, sizeof(cnt));
        //   cout << cnt;
        cout << endl;
    }
    system("pause");
}