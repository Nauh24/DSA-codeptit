#include <bits/stdc++.h>
using namespace std;
int n;
int a[16][16];
bool used[16];
int sum, cnt, minn;
string ans;
void Try(int i, int sum, int cnt, string s)
{
    if (cnt == n && sum + a[i][1] < minn)
    {
        ans = s;
        minn = min(minn, sum + a[i][1]);
    }
    for (int j = 2; j <= n; j++)
    {
        if (!used[j] && sum + a[i][j] < minn)
        {
            used[j] = true;
            Try(j, sum + a[i][j], cnt + 1, s + char(j + '0'));
            used[j] = false;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    minn = INT_MAX;
    string s = "1";
    ans;
    Try(1, 0, 1, s);
    cout << "(";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ",";
    }
    cout << "1)" << endl;
    cout << minn << endl;
    system("pause");
}