#include <bits/stdc++.h>
using namespace std;
#define ll long long
int d[101][101][101];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p;
        cin >> n >> m >> p;
        string x, y, z;
        cin >> x >> y >> z;

        memset(d, 0, sizeof(d));
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                for (int k = 1; k <= p; k++)
                {

                    if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1])
                        d[i][j][k] = d[i - 1][j - 1][k - 1] + 1;
                    else
                        d[i][j][k] = max(d[i - 1][j][k], max(d[i][j - 1][k], d[i][j][k - 1]));
                }
            }
        }

        cout << d[n][m][p];
        cout << endl;
    }

    system("pause");
}