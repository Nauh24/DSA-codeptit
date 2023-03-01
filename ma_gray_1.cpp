#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<string> a;
void solve()
{
    a.push_back("0");
    a.push_back("1");
    for (int i = 2; i <= n; i++)
    {
        int l = a.size();
        for (int j = l - 1; j >= 0; j--)
            a.push_back(a[j]);

        for (int j = 0; j < l; j++)
        {
            a[j] = "0" + a[j];
        }
        for (int j = l; j < 2 * l; j++)
        {
            a[j] = "1" + a[j];
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
        solve();
        for (auto it : a)
            cout << it << " ";
        cout << endl;
        a.clear();
    }
    system("pause");
}
