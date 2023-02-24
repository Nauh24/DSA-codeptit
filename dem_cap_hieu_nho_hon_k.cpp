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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(a.begin() + 1, a.end(), a[i] + k) - a.begin();
            cnt += it - i - 1;
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}