#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll k;
ll mod = 1e9 + 7;
ll a[11][11];
ll d[11][11];
void Mul(ll a[11][11], ll b[11][11])
{
    ll c[11][11];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            c[i][j] %= mod;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = c[i][j];
        }
    }
}
void PowMod(ll a[11][11], ll k)
{
    if (k == 1)
        return;
    PowMod(a, k / 2);
    Mul(a, a);

    if (k % 2 == 1)
        Mul(a, d);
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
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                d[i][j] = a[i][j];
            }
        }
        PowMod(a, k);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    system("pause");
}