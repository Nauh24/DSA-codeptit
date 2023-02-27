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
        int a[n + 1];
        set<int> se;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        int j = k;
        while (j >= 1 && a[j] == n - k + j)
        {
            j--;
        }
        if (j == 0)
        {
            cout << k << endl;
            continue;
        }
        else
        {
            a[j]++;
            for (int x = j + 1; x <= k; x++)
            {
                a[x] = a[x - 1] + 1;
            }
        }

        for (int i = 1; i <= k; i++)
        {
            se.insert(a[i]);
        }
        cout << se.size() - k;
        //  se.clear();
        cout << endl;
    }
    system("pause");
}