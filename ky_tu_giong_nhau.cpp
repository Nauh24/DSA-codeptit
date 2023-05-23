#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y, z;
        cin >> x >> y >> z;
        int d[n + 1];
        memset(d, 0, sizeof(d));
        d[0] = 0;
        d[1] = x;
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                d[i] = min(d[i - 1] + x, d[i / 2] + z);
            }
            else
            {
                d[i] = min(d[i - 1] + x, min(d[i / 2] + z + x, d[(i / 2) + 1] + z + y));
            }
        }
        cout << d[n];
        cout << endl;
    }
    system("pause");
}