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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        int ok = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                ans = i;
                ok = 1;
                break;
            }
        }
        cout << ans;
        cout << endl;
    }
    system("pause");
}