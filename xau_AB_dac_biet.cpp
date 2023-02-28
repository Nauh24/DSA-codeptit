#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
vector<string> v;
bool check(string &s)
{
    map<int, int> mp;
    int cnt = 0;
    int res = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            cnt++;
            if (cnt == res && cnt == k)
                return false;
            res = max(res, cnt);
        }
        else
            cnt = 0;
    }
    if (res == k)
        return true;
    return false;
}
void Try(int i)
{
    for (char j = 'A'; j <= 'B'; j++)
    {
        s += j;
        if (i == n - 1)
        {
            if (check(s))
                v.push_back(s);
        }
        else
            Try(i + 1);
        s.pop_back();
    }
}
int main()
{
    cin >> n >> k;
    s = "";
    Try(0);
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for (auto it : v)
        cout << it << endl;
    system("pause");
}