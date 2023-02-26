#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<ll> c, l;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            c.push_back(a[i]);
        else
            l.push_back(a[i]);
    }
    sort(l.begin(), l.end());
    sort(c.begin(), c.end(), greater<ll>());
    int j = 0, k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << c[j] << " ";
            j++;
        }

        else
        {
            cout << l[k] << " ";
            k++;
        }
    }
    system("pause");
}