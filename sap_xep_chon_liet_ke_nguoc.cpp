#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        int ans = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[ans] > a[j])
            {
                ans = j;
            }
        }
        swap(a[i], a[ans]);
        v.push_back(a);
        // for (auto it : v[i])
        //     cout << it << " ";
        // cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for (auto it : v[i])
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}