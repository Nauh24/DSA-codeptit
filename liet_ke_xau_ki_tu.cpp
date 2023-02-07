#include <bits/stdc++.h>
using namespace std;
char c;
int k;
char a[20];
bool check()
{
    for (int i = 2; i <= k; i++)
    {
        if (a[i] < a[i - 1])
            return false;
    }
    return true;
}
void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (char j = 'A'; j <= c; j++)
    {
        a[i] = j;
        if (i == k)
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
    cin >> c;

    cin >> k;
    Try(1);
    system("pause");
}