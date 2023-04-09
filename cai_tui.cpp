#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n >> v;
        int w[n + 1], c[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> w[i];
        for (int i = 1; i <= n; i++)
            cin >> c[i];
        int d[n + 1][v + 1];
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                d[i][j] = d[i - 1][j];
                if (j >= w[i])
                {
                    d[i][j] = max(d[i][j], d[i - 1][j - w[i]] + c[i]);
                }
            }
        }
        cout << d[n][v];
        cout << endl;
    }
    system("pause");
}