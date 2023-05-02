#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> v;
bool visited[1001];
void dfs(int u)
{
    visited[u] = true;
    cout << u << " ";
    for (auto it : v[u])
    {
        if (!visited[it])
            dfs(it);
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
        int n, e, u;
        cin >> n >> e >> u;
        v.resize(n + 1);
        memset(visited, false, sizeof(visited));
        for (int i = 1; i <= n; i++)
            v[i].clear();
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        dfs(u);
        cout << endl;
    }
    system("pause");
}