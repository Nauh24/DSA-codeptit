#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
vector<int> v[100001];
bool visited[100001];
int cnt;
void Dfs(int u)
{
    visited[u] = true;
    cnt++;
    for (auto it : v[u])
    {
        if (!visited[it])
        {
            Dfs(it);
        }
    }
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
        cin >> n >> m;
        for (int i = 0; i < 100001; i++)
            v[i].clear();
        memset(visited, false, sizeof(visited));

        while (m--)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        int res = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            cnt = 0;
            if (!visited[i])
            {
                Dfs(i);
            }
            res = max(res, cnt);
            // cout << cnt << " ";
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}