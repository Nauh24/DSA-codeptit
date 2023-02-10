#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, m;
        cin >> n >> s >> m;
        ll day = 0, cnt = 0, lt = 0;
        ll ans = s * m;
        while (day != s)
        {
            day++;
            if (day % 7 != 0)
                lt += n;
            if (lt >= m)
            {
                if (day % 7 != 0)
                    cnt++;
                if (lt >= ans)
                {
                    cout << cnt;

                    break;
                }
                ans -= m;
                lt -= m;
            }
            else
            {
                cout << -1;
                break;
            }
        }

        cout << endl;
    }
    system("pause");
}