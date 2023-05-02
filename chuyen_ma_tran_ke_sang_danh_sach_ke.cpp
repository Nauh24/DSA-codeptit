#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    vector<vector<int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                v[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (auto it : v[i])
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}