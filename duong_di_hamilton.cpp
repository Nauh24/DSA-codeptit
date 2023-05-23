#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v[11];
bool vs[11];
int n, m;
int ok;
void Dfs(int u, int cnt)
{
    if (cnt == n)
    {
        ok = 1;
        return;
    }
    for (auto it : v[u])
    {
        if (!vs[it])
        {
            vs[it] = true;
            Dfs(it, cnt + 1);
            vs[it] = false;
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
        for (int i = 1; i <= n; i++)
            v[i].clear();
        memset(vs, false, sizeof(vs));
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        ok = 0;
        for (int i = 1; i <= n; i++)
        {
            vs[i] = true;
            Dfs(i, 1);
            if (ok == 1)
            {
                cout << 1 << endl;
                break;
            }
        }
        if (ok == 0)
            cout << 0;
        cout << endl;
    }
    system("pause");
}