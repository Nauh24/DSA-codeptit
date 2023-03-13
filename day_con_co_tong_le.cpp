#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> a;
vector<int> res;
vector<vector<int>> v;
void solve()
{
    int sum = 0;
    for (auto it : res)
        sum += it;
    if (sum % 2 == 1)
        v.push_back(res);
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        if (j == 1)
            res.push_back(a[i]);
        if (i == n)
        {
            solve();
        }
        else
            Try(i + 1);
        if (j == 1)
            res.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a.begin() + 1, a.end(), greater<int>());
        Try(1);
        for (auto it : v)
        {
            for (auto x : it)
                cout << x << " ";
            cout << endl;
        }
        v.clear();
        res.clear();
        cout << endl;
    }
    system("pause");
}