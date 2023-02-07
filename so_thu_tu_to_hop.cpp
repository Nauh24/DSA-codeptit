#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[16], b[16], cnt;
bool check()
{
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
void in()
{
    for (int i = 1; i <= k; i++)
        cout << b[i] << " ";
    cout << endl;
}
void Try(int i)
{
    for (int j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
        if (i == k)
        {
            cnt++;
            // in();
            if (check())
            {
                cout << cnt;
                break;
            }
        }
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
        cnt = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        Try(1);
        cout << endl;
    }
    system("pause");
}