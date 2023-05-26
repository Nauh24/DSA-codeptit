#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
bool vs[21][21];
vector<int> v[21];
int res;
void Dfs(int u, int cnt)
{
    res = max(res, cnt);
    for (auto it : v[u])
    {
        if (!vs[u][it])
        {
            vs[u][it] = vs[it][u] = true;
            Dfs(it, cnt + 1);
            vs[u][it] = vs[it][u] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            v[i].clear();
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        res = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            Dfs(i, 0);
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}