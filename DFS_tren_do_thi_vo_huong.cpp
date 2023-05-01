#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> vi;
bool check[1001];

void Dfs(int u)
{
    check[u] = true;
    cout << u << " ";
    for (auto it : vi[u])
    {
        if (!check[it])
            Dfs(it);
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
        vi.resize(v + 1);
        for (int i = 1; i <= v; i++)
        {
            vi[i].clear();
        }
        memset(check, false, sizeof(check));
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vi[x].push_back(y);
            vi[y].push_back(x);
        }
        Dfs(u);
        cout << endl;
    }
    system("pause");
}