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
        // 0,12s;
        // for (int i = 0; i < n - k + 1; i++)
        // {
        //     ll maxx = *max_element(a + i, a + i + k);
        //     cout << maxx << " ";
        // }

        // cach su dung multiset O(nlogn);
        // 0,06s;
        multiset<int> ms;
        for (int i = 0; i < k; i++)
            ms.insert(a[i]);
        cout << *ms.rbegin() << " ";
        for (int i = k; i <= n - 1; i++)
        {
            ms.erase(ms.find(a[i - k]));
            ms.insert(a[i]);
            cout << *ms.rbegin() << " ";
        }
        cout << endl;
    }
    system("pause");
}