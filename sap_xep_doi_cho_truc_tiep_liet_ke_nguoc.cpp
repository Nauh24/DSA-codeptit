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
        vector<int> a(n);
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
            for (int j = 0; j < n; j++)
                v[i].push_back(a[j]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto it : v[i])
                cout << it << " ";
            cout << endl;
        }
        cout << endl;
    }
    system("pause");
}