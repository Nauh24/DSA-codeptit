#include <bits/stdc++.h>
using namespace std;
int n;
int a[11];
bool used[11] = {false};
bool check()
{
    for (int i = 2; i <= n; i++)
    {
        if (abs(a[i] - a[i - 1]) == 1)
            return false;
    }
    return true;
}
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            a[i] = j;
            used[j] = true;
            if (i == n)
            {
                if (check())
                    in();
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
        cin >> n;
        if (n < 4)
        {
            cout << endl;
            continue;
        }
        Try(1);
        cout << endl;
    }
    system("pause");
}