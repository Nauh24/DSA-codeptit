#include <bits/stdc++.h>
using namespace std;
int n;
int a[11];
int check[11];
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {

            check[j] = 1;
            a[i] = j;
            if (i == n)
                in();
            else
                Try(i + 1);
            check[j] = 0;
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
        Try(1);
        cout << endl;
    }
    system("pause");
}