#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f[100];
void fibo(int n, ll k)
{
    if (n == 1)
    {
        cout << "A";
        return;
    }

    if (n == 2)
    {
        cout << "B";
        return;
    }

    if (k <= f[n - 2])
        fibo(n - 2, k);
    else
        fibo(n - 1, k - f[n - 2]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll k;
        cin >> k;

        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i <= 93; i++)
        {
            f[i] = f[i - 2] + f[i - 1];
            // cout << f[i] << " ";
        }
        fibo(n, k);

        cout << endl;
    }
    system("pause");
}