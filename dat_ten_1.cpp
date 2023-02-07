#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
int a[31];
vector<string> v;
void solve(int i)
{
    cout << v[i - 1];
}
void in()
{
    for (int i = 1; i <= k; i++)
    {
        solve(a[i]);
        cout << " ";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= ans - k + i; j++)
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
    cin >> n >> k;

    string s;

    set<string> se;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        se.insert(s);
    }
    for (auto it : se)
    {
        v.push_back(it);
    }
    ans = se.size();
    Try(1);
    // for (auto it : v)
    //     cout << it << " ";
    // solve(3);
    system("pause");
}