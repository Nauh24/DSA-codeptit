#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[17];
vector<char> v;
void solve()
{
    for (int i = 0; i < n; i++)
    {
        v.push_back('A' + i);
    }
}
void solve2(int i)
{
    cout << v[i - 1];
}
void in()
{
    for (int i = 1; i <= k; i++)
    {
        solve2(a[i]);
        // cout << v[a[i] - 1];
        // cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            Try(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        solve();
        Try(1);
        v.clear();
        // for (auto it : v)
        //     cout << it << " ";
        cout << endl;
    }
    system("pause");
}