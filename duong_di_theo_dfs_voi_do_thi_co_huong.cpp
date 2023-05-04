#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool visited[1001];
int parent[1001];
void Dfs(int u)
{
    visited[u] = true;
    for (auto it : vi[u])
    {
        if (!visited[it])
        {
            parent[it] = u;
            Dfs(it);
        }
    }
}
void Trace(int s, int t)
{
    Dfs(s);
    if (!visited[t])
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> trace;
        while (t != s)
        {
            trace.push_back(t);
            t = parent[t];
        }
        trace.push_back(s);
        reverse(trace.begin(), trace.end());
        for (auto it : trace)
            cout << it << " ";
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
        int n, e, s, t;
        cin >> n >> e >> s >> t;
        memset(visited, false, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        vi.resize(n + 1);
        for (int i = 1; i <= n; i++)
            vi[i].clear();

        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vi[x].push_back(y);
        }
        Trace(s, t);
        cout << endl;
    }
    system("pause");
}