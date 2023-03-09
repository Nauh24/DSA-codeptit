#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll a[11][11], b[11][11], c[11][11], d[11][11];
ll mod = 1e9 + 7;
ll sum;

void Mul(ll a[11][11], ll b[11][11])
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            c[i][j] = 0;
            for (int k = 1; k <= n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = c[i][j];
        }
    }
}
void Pow(ll a[11][11], ll k)
{
    if (k == 1)
        return;
    Pow(a, k / 2);
    Mul(a, a);
    // ll y=(x*x)%mod;
    if (k % 2 == 1)
        return Mul(a, d);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                d[i][j] = a[i][j];
            }
        }
        Pow(a, k);
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i][n];
            sum %= mod;
        }
        cout << sum;
        cout << endl;
    }
    system("pause");
}