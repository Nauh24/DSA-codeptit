#include <bits/stdc++.h>
using namespace std;
int n, k;
string a[9], b[9];
bool used[9];
int c[9];
int ans;
void solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            b[i][j] = a[i][c[j]];
        }
    }
    sort(b, b + n);
    int minn = stoi(b[0]);
    int maxx = stoi(b[n - 1]);
    ans = min(ans, maxx - minn);
}
void Try(int i)
{
    for (int j = 0; j < k; j++)
    {
        if (!used[j])
        {
            used[j] = true;
            c[i] = j;
            if (i == k - 1)
            {
                solve();
            }
            else
                Try(i + 1);
            used[j] = false;
        }
    }
}
int main()
{
    cin >> n >> k;
    ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    Try(0);
    cout << ans << endl;
    system("pause");
}