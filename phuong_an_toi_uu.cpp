#include <bits/stdc++.h>
using namespace std;
int n, w;
int a[101], c[101];
int x[101];
string s;
int sum, f, res;
void solve()
{
    sum = 0;
    res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 1)
        {
            sum += a[i];
            res += c[i];
        }
    }
    if (sum <= w)
    {
        if (res > f)
        {
            f = res;
            s = "";
            for (int i = 1; i <= n; i++)
            {
                s += (x[i] + '0');
            }
        }
    }
    return;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
        {
            solve();
        }
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    f = INT_MIN;
    Try(1);
    cout << f << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    system("pause");
}