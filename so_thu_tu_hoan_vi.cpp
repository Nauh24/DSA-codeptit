#include <bits/stdc++.h>
using namespace std;
int n;
int a[11], b[11];
int cnt;
bool used[11] = {false};
bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            used[j] = true;
            a[i] = j;
            if (i == n)
            {
                cnt++;

                if (check())
                {
                    cout << cnt;
                    // break;
                }
            }
            else
                Try(i + 1);
            used[j] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        Try(1);
        cout << endl;
    }
    system("pause");
}