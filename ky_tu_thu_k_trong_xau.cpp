#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
void Try(int n, char x)
{
    if (n == 1)
    {
        cout << x;
        return;
    }
    if (k == pow(2, n - 1))
    {
        cout << x;
        return;
    }
    else if (k < pow(2, n - 1))
        Try(n - 1, x - 1);
    else
    {
        k -= pow(2, n - 1);
        Try(n - 1, x - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(n, 'A' + n - 1);
        cout << endl;
    }
    system("pause");
}