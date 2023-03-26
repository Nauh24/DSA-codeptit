#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string a[11], b[11];
bool used[11];
int res;
void Try(int i, int cnt)
{
    if (i > n)
    {
        res = min(res, cnt);
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            used[j] = true;
            b[i] = a[j];
            int d[127] = {};
            for (auto it : b[i])
                d[it]++;
            for (auto it : b[i - 1])
                d[it]++;
            int dem = 0;
            for (int x = 'A'; x <= 'Z'; x++)
            {
                if (d[x] == 2)
                    dem++;
            }
            if (cnt + dem < res)
            {
                Try(i + 1, cnt + dem);
            }
            used[j] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    res = INT_MAX;
    Try(1, 0);
    cout << res << endl;
    system("pause");
}