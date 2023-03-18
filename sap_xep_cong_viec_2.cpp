#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            cin >> v[i].first;
            cin >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        int sum = 0, cnt = 0;
        bool used[1001] = {false};
        for (int i = 0; i < n; i++)
        {
            for (int j = v[i].first; j > 0; j--)
            {
                if (!used[j])
                {
                    sum += v[i].second;
                    cnt++;
                    used[j] = true;
                    break;
                }
            }
        }
        cout << cnt << " " << sum;
        cout << endl;
    }
    system("pause");
}