#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, p, s;
int sum;
int l;
int b[200];
int a[11];
vector<int> v;
vector<int> ans;
vector<vector<int>> res;

void sieve()
{

    for (int i = 0; i <= 200; i++)
        b[i] = 1;
    b[0] = 0;
    b[1] = 0;
    for (int i = 2; i <= sqrt(200); i++)
    {
        if (b[i] == 1)
        {
            for (int j = i * i; j <= 200; j += i)
                b[j] = 0;
        }
    }
    for (int i = 2; i <= 200; i++)
    {
        if (b[i])
            v.push_back(i);
    }
}

void Try(int i, int sum)
{
    if (sum > s)
        return;
    if (sum == s)
    {
        if (ans.size() == n)
            res.push_back(ans);
        return;
    }
    for (int j = i; j <= l; j++)
    {
        ans.push_back(v[j]);
        Try(j + 1, sum + v[j]);
        ans.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sieve();
    l = v.size();
    while (t--)
    {
        cin >> n >> p >> s;
        auto it = upper_bound(v.begin(), v.end(), p) - v.begin();
        // cout << v.size();
        Try(it, 0);
        cout << res.size() << endl;
        for (auto it : res)
        {
            for (auto x : it)
                cout << x << " ";
            cout << endl;
        }
        ans.clear();
        res.clear();
        cout << endl;
    }
    system("pause");
}