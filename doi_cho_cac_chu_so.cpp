#include <bits/stdc++.h>
using namespace std;
#define ll long long
int k;
int cnt;
string s;
void solve()
{
    for (int i = 0; i < s.size() - 1 && cnt < k; i++)
    {
        char maxx = s[i];
        int idx = i;
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[j] >= maxx)
            {
                maxx = s[j];
                idx = j;
            }
        }
        if (idx != i && maxx > s[i])
            cnt++;
        swap(s[i], s[idx]);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cin >> s;
        cnt = 0;
        solve();
        cout << s;
        cout << endl;
    }
    system("pause");
}