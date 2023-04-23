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
        int a[n + 1];
        int c[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int j = 1; j <= n; j++)
            cin >> c[j];
        int d[n + 1][n + 1];
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                if (j < a[i])
                    d[i][j] = d[i - 1][j];
                else
                    d[i][j] = max(d[i - 1][j], d[i - 1][j - a[i]] + c[i]);
            }
        }
        cout << d[n][v];
        cout << endl;
    }
    system("pause");
}