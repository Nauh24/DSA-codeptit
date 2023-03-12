#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
vector<int> v;
int a[100];
void solve()
{
    for (int i = 1; i <= k; i++)
    {
        cout << v[a[i] - 1] << " ";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            solve();
        }
        else
            Try(i + 1);
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
        cin >> n >> k;
        v.resize(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        Try(1);
        cout << endl;
    }
    system("pause");
}