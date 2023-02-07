#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1001];
set<int> se;
vector<int> v;
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
    for (int j = a[i - 1] + 1; j <= se.size() - k + i; j++)
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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    for (auto it : se)
        v.push_back(it);
    Try(1);
    system("pause");
}