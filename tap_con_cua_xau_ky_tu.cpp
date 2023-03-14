#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s;
char a[257];
string res;
vector<string> v;
void Try(int i)
{
    if (i == n)
        return;
    for (int j = i; j < n; j++)
    {
        res += s[j];
        v.push_back(res);
        Try(j + 1);
        res.pop_back();
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
        cin >> s;
        res = "";
        v.clear();
        Try(0);
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}