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

        pair<ll, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        int ans = -1, Min = a[0].second;
        ll k = a[0].first;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first > k)
                ans = max(ans, a[i].second - Min);
            if (a[i].second < Min)
            {
                Min = a[i].second;
                k = a[i].first;
            }
        }
        cout << ans;

        cout << endl;
    }

    system("pause");
}