#include <bits/stdc++.h>
using namespace std;
int n, k;
int cnt;
vector<int> a, b, c;
void solve()
{
    vector<int> tmp = c;
    sort(tmp.begin(), tmp.end());
    if (tmp == c)
        cnt++;
}
void Try(int i)
{
    for (int j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
        c[i] = a[b[i]];
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
    cin >> n >> k;
    a.resize(n + 1);
    b.resize(k + 1);
    c.resize(k + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cnt = 0;
    Try(1);
    cout << cnt << endl;
    system("pause");
}