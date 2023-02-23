#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok = 0;
        vector<pair<int, int>> v;
        for (auto it : mp)
        {
            v.push_back(it);
        }
        sort(v.begin(), v.end(), cmp);
        for (auto it : v)
        {
            if (it.second > (n / 2))
            {
                cout << it.first;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << "NO";
        cout << endl;
    }
    system("pause");
}