#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int cnt, dem;
int a[11];
int ok;
void ktao()
{
    cnt = 1;
    a[1] = n;
    dem++;
}
void sinh()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
        ok = 0;
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if (q)
        {
            for (int j = 1; j <= q; j++)
            {
                cnt++;
                a[cnt] = a[i];
            }
        }
        if (r)
        {
            cnt++;
            a[cnt] = r;
        }
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
        cin >> n;
        ok = 1;
        dem = 1;
        vector<int> res;
        vector<vector<int>> v;
        ktao();
        while (ok)
        {

            for (int i = 1; i <= cnt; i++)
            {
                res.push_back(a[i]);
            }
            v.push_back(res);
            res.clear();
            sinh();
            // cout << endl;
        }
        cout << v.size() << endl;
        for (auto it : v)
        {
            cout << "(";
            for (int i = 0; i < it.size(); i++)
            {
                cout << it[i];
                if (i != it.size() - 1)
                    cout << " ";
            }
            cout << ") ";
        }
        v.clear();
        cout << endl;
    }
    system("pause");
}