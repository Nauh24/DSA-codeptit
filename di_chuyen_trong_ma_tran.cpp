#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[101][101];
int cnt;
void Try(int i, int j)
{
    if (i == m && j == n)
        cnt++;
    if (i < m)
        Try(i + 1, j);
    if (j < n)
        Try(i, j + 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        cnt = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        Try(1, 1);
        cout << cnt;
        cout << endl;
    }
    system("pause");
}