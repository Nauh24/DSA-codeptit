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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        vector<int> v;

        for (int i = 0; i < n / 2; i++)
        {
            v.push_back(a[n - 1 - i]);
            v.push_back(a[i]);
        }
        if (n % 2 == 1)
            v.push_back(a[n / 2]);

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    system("pause");
}