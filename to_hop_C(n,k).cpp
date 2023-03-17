#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
ll mod = 1e9 + 7;
ll c[1001][1001];
void solve()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                c[i][j] = 1;
            else if (j == 1 || j == i - 1)
                c[i][j] = i;
            else
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            c[i][j] %= mod;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        cout << c[n][k];

        cout << endl;
    }
    system("pause");
}