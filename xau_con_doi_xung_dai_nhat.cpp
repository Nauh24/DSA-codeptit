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
        string s;
        cin >> s;
        int n = s.size();
        s = "0" + s;
        bool f[n + 1][n + 1];
        memset(f, false, sizeof(f));
        for (int i = 1; i <= n; i++)
            f[i][i] = true;
        int res = 1;
        for (int len = 2; len <= n; len++)
        {
            for (int i = 1; i <= n - len + 1; i++)
            {
                int j = len + i - 1;
                if (len == 2 && s[i] == s[j])
                    f[i][j] = true;
                else
                    f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);

                if (f[i][j])
                    res = max(res, len);
            }
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}