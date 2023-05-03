#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool visited[1001];
void Bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int x = q.front();
        cout << x << " ";
        // visited[x] = true;
        q.pop();
        for (auto it : vi[x])
        {
            if (!visited[it])
                q.push(it);
            visited[it] = true;
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
        int n, e, u;
        cin >> n >> e >> u;
        vi.resize(n + 1);
        for (int i = 1; i <= n; i++)
            vi[i].clear();
        memset(visited, false, sizeof(visited));
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vi[x].push_back(y);
        }
        Bfs(u);
        cout << endl;
    }
    system("pause");
}