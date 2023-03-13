#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll s;
int cnt;
vector<ll> a;
int minn;
void Try(int i, ll sum, int cnt)
{
    if (sum > s || cnt >= minn)
        return;
    if (sum == s)
    {
        if (cnt < minn)
            minn = cnt;
        return;
    }
    for (int j = i; j <= n; j++)
    {
        Try(j + 1, sum + a[j + 1], cnt + 1);
    }
}
int main()
{
    cin >> n >> s;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    minn = 50;
    sort(a.begin() + 1, a.end(), greater<ll>());
    Try(0, 0, 0);
    if (minn == 50)
        cout << -1;
    else
        cout << minn;

    cout << endl;
    system("pause");
}