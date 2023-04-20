#include <bits/stdc++.h>
using namespace std;
int main()
{
    int f[41];
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        memset(f, 0, sizeof(f));
        if (s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }

        f[0] = f[1] = 1;
        for (int i = 2; i <= s.size(); i++)
        {
            if (s[i - 1] > '0')
                f[i] = f[i - 1];
            if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))
                f[i] += f[i - 2];
        }
        cout << f[s.size()];
        cout << endl;
    }
    system("pause");
}