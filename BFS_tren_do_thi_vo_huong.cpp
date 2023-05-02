#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool check[1001];

void Bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = true;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        cout << u << " ";
        for (auto it : vi[u])
        {
            if (!check[it])
            {
                q.push(it);
                check[it] = true;
            }
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
        int v, e, u;
        cin >> v >> e >> u;
        memset(check, false, sizeof(check));
        vi.resize(v + 1);
        for (int i = 1; i <= v; i++)
            vi[i].clear();
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vi[x].push_back(y);
            vi[y].push_back(x);
        }
        Bfs(u);
        cout << endl;
    }

    system("pause");
}