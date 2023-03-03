#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
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
            // cach 1
            //  if (s[i] == '1')
            //  {
            //      if (s[i - 1] == '0')
            //          res += "1";
            //      else
            //          res += "0";
            //  }
            //  else
            //      res += s[i - 1];
            // cach2
            if (s[i] != s[i - 1])
                res += "1";
            else
                res += "0";
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}