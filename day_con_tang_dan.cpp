#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];
vector<int> v;
vector<string> vi;
string s;
void solve()
{
    s = "";
    for (auto it : v)
    {
        s += to_string(it) + " ";
    }
    vi.push_back(s);
}
void Try(int i)
{
    for (int j = i + 1; j <= n; j++)
    {
        if (a[j] > a[i])
        {
            v.push_back(a[j]);
            if (v.size() > 1)
            {
                solve();
            }
            Try(j);
            v.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(0);
    sort(vi.begin(), vi.end());
    for (auto it : vi)
    {
        cout << it << endl;
    }
    system("pause");
}