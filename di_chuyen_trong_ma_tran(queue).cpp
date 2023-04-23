#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Mt
{
    int i, j, k;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        queue<Mt> q;
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        bool visit[n + 1][m + 1] = {false};
        q.push({1, 1, 0});
        int cnt = 0;
        int res = -1;
        while (!q.empty())
        {
            int x = q.front().i;
            int y = q.front().j;
            int z = q.front().k;
            q.pop();
            // visit[x][y] = true;
            //  cout << x << " " << y << " " << z << endl;
            if (x == n && y == m)
            {
                res = z;
                break;
            }

            if (y + a[x][y] <= m && visit[x][y + a[x][y]] == false)
            {
                visit[x][y + a[x][y]] = true;
                q.push({x, y + a[x][y], z + 1});
            }

            if (x + a[x][y] <= n && visit[x + a[x][y]][y] == false)
            {
                visit[x + a[x][y]][y] = true;
                q.push({x + a[x][y], y, z + 1});
            }
        }

        cout << res;
        cout << endl;
    }
    system("pause");
}