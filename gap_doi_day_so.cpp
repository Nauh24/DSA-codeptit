#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a[51];
        a[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            a[i] = a[i - 1] * 2;
        }
        while (n >= 1)
        {
            if (k > a[n])
                k -= a[n];
            if (k == a[n])
            {
                cout << n;
                break;
            }
            n--;
        }
        cout << endl;
    }
    system("pause");
}