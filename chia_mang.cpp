#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[21];
int used[101];
int ok, sum, cnt;
void Try(int tong, int cnt)
{
    if (ok == 1)
        return;
    if (cnt == k)
    {
        ok = 1;
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            used[j] = 1;
            if (tong == sum)
                Try(0, cnt + 1);
            else if (tong < sum)
                Try(tong + a[j], cnt);
            else
                return;
        }
        used[j] = 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % k != 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            sum /= k;
            ok = 0;
            Try(0, 0);
            if (ok == 1)
                cout << 1;
            else
                cout << 0;
        }
        memset(used, 0, sizeof(used));
        cout << endl;
    }
    system("pause");
}