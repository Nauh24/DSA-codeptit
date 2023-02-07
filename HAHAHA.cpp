#include <bits/stdc++.h>
using namespace std;
int n;
int a[17];
bool check()
{
    if (a[1] == 1)
        return false;
    if (a[n] == 0)
        return false;
    for (int i = 2; i <= n - 1; i++)
    {
        if (a[i] == 0 && a[i - 1] == 0)
            return false;
    }
    return true;
}
void in()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            cout << "H";
        else
            cout << "A";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j >= 0; j--)
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
        cin >> n;
        Try(1);
        cout << endl;
    }
    system("pause");
}