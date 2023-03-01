#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[101];
int b[101][101];
ll sum;
ll res;
int cot[101], d1[101], d2[101];
void solve()
{
    sum = 0;
    int j = 1;
    for (int i = 1; i <= 8; i++)
    {
        sum += b[j][a[i]];
        j++;
    }
}
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (cot[j] == 0 && d1[i - j + 8] == 0 && d2[i + j - 1] == 0)
        {
            cot[j] = d1[i - j + 8] = d2[i + j - 1] = 1;
            a[i] = j;
            if (i == 8)
            {
                solve();
                res = max(res, sum);
            }

            Try(i + 1);
            cot[j] = d1[i - j + 8] = d2[i + j - 1] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res = INT_MIN;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                cin >> b[i][j];
        }
        Try(1);
        cout << res;
        cout << endl;
    }
    system("pause");
}
