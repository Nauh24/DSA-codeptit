#include <bits/stdc++.h>
using namespace std;
string s;
vector<string> v;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        string res = "";
        res += s[0];
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != res.back())
                res += "1";
            else
                res += "0";
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}