#include <bits/stdc++.h>
using namespace std;
int n, e, s;
vector<pair<int, int>> vi[1001];
vector<int> d;
vector<int> vs;
void Dijkstra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    d[s] = 0;
    while (!q.empty())
    {
        int u = q.top().second;
        int a = q.top().first;
        q.pop();
        vs[u] = 1;
        for (auto it : vi[u])
        {
            int v = it.first;
            if (vs[v] == 0)
            {
                d[v] = min(d[v], a + it.second);
                q.push({d[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << d[i] << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> e >> s;
        d.resize(n + 1, INT_MAX);
        vs.resize(n + 1, 0);
        for (int i = 1; i <= n; i++)
            vi[i].clear();
        while (e--)
        {
            int x, y, w;
            cin >> x >> y >> w;
            vi[x].push_back({y, w});
            vi[y].push_back({x, w});
        }
        Dijkstra(s);
        cout << endl;
    }
    system("pause");
}