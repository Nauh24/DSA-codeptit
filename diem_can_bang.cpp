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
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        int ok = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] == (a[n] - a[i]))
            {
                cout << i << endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << -1;
        cout << endl;
        cout << endl;
    }
    system("pause");
}