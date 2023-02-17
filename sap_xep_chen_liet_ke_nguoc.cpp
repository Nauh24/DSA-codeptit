#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> vii;
    for (int i = 0; i < n; i++)
    {
        v.push_back(a[i]);
        sort(v.begin(), v.end());
        vii.push_back(v);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "Buoc " << i << ": ";
        for (auto it : vii[i])
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}