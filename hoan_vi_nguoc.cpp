#include <bits/stdc++.h>
using namespace std;
int n;
int a[11];
bool used[11] = {false};
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void Try(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (!used[j])
        {
            used[j] = true;
            a[i] = j;
            if (i == n)
                in();
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
        Try(1);
        cout << endl;
    }
    system("pause");
}