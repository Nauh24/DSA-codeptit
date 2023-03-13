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
        vector<ll> v;
        ll left[n], right[n];
        left[0] = a[0];
        right[n - 2] = a[n - 1];
        for (int i = 1; i < n - 1; i++)
        {
            left[i] = max(left[i - 1], a[i]);
            //  cout << left[i] << " ";
        }
        cout << endl;
        for (int i = n - 3; i >= 0; i--)
        {
            right[i] = min(right[i + 1], a[i + 1]);
            //   cout << right[i] << " ";
        }
        // for (int i = 0; i < n - 1; i++)
        // {
        //     cout << left[i] << " " << right[i];
        //     cout << endl;
        // }
        for (int i = 0; i < n - 1; i++)
        {
            if (left[i] <= right[i])
                v.push_back(i + 1);
        }
        cout << v.size() << endl;
        if (v.size() != 0)
        {
            for (auto it : v)
                cout << it << " ";
        }
        cout << endl;
    }
    system("pause");
}