#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        ll x = 0, y = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        // x = (a[0] - '0');
        // y = b[0] - '0';
        for (int i = 0; i < a.size(); i++)
        {
            x += (a[i] - '0') * pow(2, i);
        }
        for (int i = 0; i < b.size(); i++)
        {
            y += (b[i] - '0') * pow(2, i);
        }
        cout << x * y;
        cout << endl;
    }
    system("pause");
}