#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<int> res;
vector<vector<int>> v;
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int sum = 0;
    for (auto it : res)
        sum += it;
    if (snt(sum))
        v.push_back(res);
}
inline void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        if (j == 1)
            res.push_back(a[i]);
        if (i == n - 1)
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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        Try(0);
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