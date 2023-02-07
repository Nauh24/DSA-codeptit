#include <bits/stdc++.h>
using namespace std;
int n;
int a[50];
bool check()
{
    int l = 1, r = n;
    while (l < r)
    {
        if (a[l] != a[r])
            return false;
        l++;
        r--;
    }
    return true;
}
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
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
    cin >> n;
    Try(1);
    system("pause");
}
