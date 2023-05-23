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
        ll d[n + 1];
        d[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            d[i] = i;
            for (int j = 1; j <= sqrt(i); j++)
            {
                d[i] = min(d[i], d[i - j * j] + 1); // i=i-j*j+j*j;
            }
        }
        cout << d[n];
        cout << endl;
    }
    system("pause");
}