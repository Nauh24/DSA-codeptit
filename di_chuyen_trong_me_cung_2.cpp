#include <bits/stdc++.h>
using namespace std;
int n;
int a[9][9];
bool check[9][9];
string s;
set<string> se;
int x[4] = {1, 0, 0, -1};
int y[4] = {0, 1, -1, 0};
string res = "DRLU";
void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        se.insert(s);
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if (a[u][v] == 1 && !check[u][v] && u >= 1 && u <= n && v >= 1 && v <= n)
        {
            check[u][v] = true;
            Try(u, v, s + res[k]);
            check[u][v] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                check[i][j] = false;
            }
        }
        s = "";
        if (a[1][1] == 0 || a[n][n] == 0)
        {
            cout << -1 << endl;
            continue;
        }
        check[1][1] = true;
        Try(1, 1, s);
        if (se.size() == 0)
            cout << -1 << endl;
        else
        {
            for (auto it : se)
                cout << it << " ";
        }
        cout << endl;
        se.clear();
    }
    system("pause");
}