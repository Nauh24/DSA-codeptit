#include <bits/stdc++.h>
using namespace std;
string s;

void khoitao()
{
    s = "02022000";
}
bool check()
{
    if (s[0] == '0' && s[1] == '0')
        return false;
    if (s[3] == '0' || s[2] == '2')
        return false;
    if (s[4] == '0')
        return false;
    return true;
}
void in()
{
    cout << s[0] << s[1] << "/" << s[2] << s[3] << "/" << s.substr(4);
    cout << endl;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        if (j == 0)
            s += "0";
        if (j == 1)
            s += "2";
        // s[i] += j;
        if (i == 7)
        {
            if (check())
                in();
            // cout << s << endl;
        }
        else
            Try(i + 1);
        s.erase(s.length() - 1);
    }
}
int main()
{
    s = "";
    Try(0);

    system("pause");
}