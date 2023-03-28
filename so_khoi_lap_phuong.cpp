#include <bits/stdc++.h>
using namespace std;
#define ll long long
// string s;
bool check(string a, string b)
{
    int index = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if (a[index] == b[i])
            index++;
    }
    if (index == a.size())
        return true;
    else
        return false;
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
        ll s;
        cin >> s;
        ll x = cbrt(s);
        int ok = 0;
        for (int i = x; i >= 1; i--)
        {
            ll z = pow(i, 3);
            if (check(to_string(z), to_string(s)))
            {
                cout << z << endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << -1;
        cout << endl;
    }
    system("pause");
}