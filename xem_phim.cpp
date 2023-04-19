#include <bits/stdc++.h>
using namespace std;
#define ll long long
int d[101][25001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, c;
    cin >> c >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 25000; j++)
            d[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (a[i] <= j)
                d[i][j] = max(d[i - 1][j], d[i - 1][j - a[i]] + a[i]);
            else
                d[i][j] = d[i - 1][j];
        }
    }
    cout << d[n][c] << endl;
    system("pause");
}