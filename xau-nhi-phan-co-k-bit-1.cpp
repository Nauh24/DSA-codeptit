#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[17];
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i];
    if (sum != k)
        return false;
    else
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
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check())
                in();
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
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
    system("pause");
}