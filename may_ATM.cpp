#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ok;
int n;
ll s, sum;
int cnt;
vector<ll> a;
ll minn;
void Try(int i, ll sum, int cnt)
{
    if (sum == s || cnt >= minn)
    {
        ok = 1;
        minn = cnt;
        return;
    }
    else if (sum < s)
    {
        for (int j = i; j <= n; j++)
        {
            Try(j + 1, sum + a[j], cnt + 1);
        }
    }
    else
        return;
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
        cin >> n >> s;
        ok = 0;
        minn = INT_MAX;
        a.resize(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a.begin() + 1, a.end(), greater<ll>());
        Try(1, 0, 0);
        if (ok == 0)
            cout << -1;
        else
            cout << minn;
        cout << endl;
    }
    system("pause");
}