#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[16][16];
ll sum;
int cnt;
int used[16];
ll minn;
void Try(int i, ll sum, int cnt)
{
    if (cnt == n)
    {
        minn = min(minn, sum + a[i][1]);
        return;
    }
    for (int j = 2; j <= n; j++)
    {
        if (used[j] == 0 && sum + a[i][j] < minn)
        {
            used[j] = 1;
            Try(j, sum + a[i][j], cnt + 1);
            used[j] = 0;
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
    Try(1, 0, 1);
    cout << minn;
    cout << endl;
    system("pause");
}