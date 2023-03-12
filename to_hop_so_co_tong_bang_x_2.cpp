#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, x;
int a[21];
int cnt;
int ok;
vector<int> res;
vector<vector<int>> v;
int sum;
void Try(int limit, int sum)
{
    if (sum == x)
    {
        ok = 1;
        v.push_back(res);
        return;
    }
    else if (sum < x)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= limit)
            {
                limit = a[i];
                res.push_back(a[i]);
                Try(limit, sum + a[i]);
                res.pop_back();
            }
        }
    }
    else
        return;
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
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a, a + n);
        ok = 0;
        Try(1, 0);
        if (v.size() == 0)
            cout << "-1";
        else
        {
            cout << v.size() << " ";
            for (auto it : v)
            {
                cout << "{";
                for (int i = 0; i < it.size(); i++)
                {
                    cout << it[i];
                    if (i != it.size() - 1)
                        cout << " ";
                }
                cout << "} ";
            }
        }
        v.clear();
        cout << endl;
    }
    system("pause");
}