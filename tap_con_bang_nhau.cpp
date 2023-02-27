#include <bits/stdc++.h>
using namespace std;
#define ll long long
string ans;
int n, sum;
int a[101];
void Try(int i, int s)
{
    if (ans == "YES")
        return;
    if (s == sum / 2)
    {
        ans = "YES";
        return;
    }
    if (i < n)
    {
        if (s + a[i] <= sum / 2)
        {
            Try(i + 1, s + a[i]);
        }
        Try(i + 1, s);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        ans = "NO";
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
        {
            Try(0, 0);
        }
        cout << ans;
        cout << endl;
    }
    system("pause");
}