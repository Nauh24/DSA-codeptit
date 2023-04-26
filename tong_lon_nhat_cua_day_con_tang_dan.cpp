#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int f[n + 1];
        // memset(f,0,sizeof(f));
        f[1] = a[1];
        for (int i = 2; i <= n; i++)
        {
            f[i] = a[i];
            for (int j = 1; j <= i - 1; j++)
            {
                if (a[i] > a[j])
                {
                    f[i] = max(f[j] + a[i], f[i]);
                }
            }
        }
        cout << *max_element(f + 1, f + n + 1);
        cout << endl;
    }
    system("pause");
}