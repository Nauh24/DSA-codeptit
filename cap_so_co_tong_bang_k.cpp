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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += mp[k - a[i]];
            if (a[i] * 2 == k)
                cnt--;
        }
        cout << cnt / 2;
        cout << endl;
    }
    system("pause");
}