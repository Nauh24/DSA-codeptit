#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[41];
int ok;
void next()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 1;
        // cout << k;
    }

    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ok = 0;
        cin >> n >> k;
        set<int> se;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        next();
        for (int i = 1; i <= k; i++)
            se.insert(a[i]);
        // if (ok)
        //     cout << k;

        if (ok == 0)
            cout << se.size() - k;
        else
            cout << k;
        // cout << endl
        //      << se.size();
        se.clear();

        cout << endl;
    }
    system("pause");
}