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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // ok[a[i]] = true;
            mp[a[i]]++;
        }
        int maxx = *max_element(a, a + n);
        int minn = *min_element(a, a + n);
        // cout << maxx << " " << minn << endl;
        int cnt = 0;
        for (int i = minn; i <= maxx; i++)
        {
            if (mp[i] == 0)
                cnt++;
            //  cout << i << " ";
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}