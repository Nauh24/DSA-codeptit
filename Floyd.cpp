#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = 1e9;
        }
    }
    while (m--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        a[x][y] = w;
        a[y][x] = w;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int s, v;
        cin >> s >> v;
        cout << a[s][v] << endl;
    }
    system("pause");
}