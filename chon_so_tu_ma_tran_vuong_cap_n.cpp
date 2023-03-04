#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
int a[10][10];
int b[10];
int sum;
int cnt;
int used[10] = {0};
vector<vector<int>> v;
void solve()
{
    sum = 0;
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i][b[i]];
    }
    vector<int> res;
    if (sum == k)
    {
        for (int j = 1; j <= n; j++)
        {
            res.push_back(b[j]);
        }
        v.push_back(res);
        // for (int i = 1; i <= n; i++)
        //     cout << b[i] << " ";
        // cout << endl;
    }
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            used[j] = 1;
            b[i] = j;
            if (i == n)
            {
                solve();
            }
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    cnt = 0;
    Try(1);
    cout << v.size() << endl;
    for (auto it : v)
    {
        for (auto x : it)
            cout << x << " ";
        cout << endl;
    }
    system("pause");
}