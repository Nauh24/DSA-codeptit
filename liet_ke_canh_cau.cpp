#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> vi;
bool visited[1001];
vector<pair<int, int>> ds;
void dfs(int u)
{
    visited[u] = true;
    for (auto it : vi[u])
    {
        if (!visited[it])
            dfs(it);
    }
}
void dfs2(int u, int s, int t)
{
    visited[u] = true;
    for (auto it : vi[u])
    {
        if ((u == s && it == t) || (u == t && it == s))
            continue;
        if (!visited[it])
            dfs2(it, s, t);
    }
}
void canhcau()
{
    int tplt = 0;
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            tplt++;
            dfs(i);
        }
    }
    for (auto it : ds)
    {
        memset(visited, false, sizeof(visited));
        int x = it.first, y = it.second;
        int dem = 0;
        for (int i = 1; i <= v; i++)
        {
            if (!visited[i])
            {
                dem++;
                dfs2(i, x, y);
            }
        }
        if (dem > tplt)
            cout << x << " " << y << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vi.resize(v + 1);
        for (int i = 1; i <= v; i++)
            vi[i].clear();
        ds.clear();
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vi[x].push_back(y);
            vi[y].push_back(x);
            ds.push_back({x, y});
        }
        canhcau();
        cout << endl;
    }
    system("pause");
}