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
        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            bool ok = true;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    ok = false;
                }
            }
            if (ok)
            {
                break;
            }
            v.push_back(a);
        }
        for (int i = v.size() - 1; i >= 0; i--)
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