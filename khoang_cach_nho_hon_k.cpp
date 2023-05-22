#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += lower_bound(a + i + 1, a + n, a[i] + k) - a - i - 1;
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}