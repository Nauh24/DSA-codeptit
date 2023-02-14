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
        ll res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll sum = a[i] + a[j];
                if (abs(sum) < abs(res))
                {
                    res = sum;
                }
            }
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}