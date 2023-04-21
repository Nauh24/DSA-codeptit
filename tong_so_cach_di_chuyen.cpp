#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int d[n + 1];
        memset(d, 0, sizeof(d));
        d[0] = 1;
        d[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (i >= j)
                {
                    d[i] += d[i - j];
                    d[i] %= mod;
                }
            }
        }
        cout << d[n];
        cout << endl;
    }
}
