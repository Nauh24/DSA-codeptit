#include <bits/stdc++.h>
using namespace std;
char c;
int a[10];
bool used[10] = {false};
string s;
bool check()
{
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == 'A' || s[i] == 'E')
        {
            if ((s[i - 1] != 'A' && s[i - 1] != 'E') && (s[i + 1] != 'A' && s[i + 1] != 'E'))
                return false;
        }
    }
    return true;
}
void Try(char i)
{
    for (char j = 'A'; j <= c; j++)
    {
        if (!used[j])
        {
            used[j] = true;
            s.push_back(j);

            if (i == c)
            {
                if (check())
                    cout << s << endl;
            }
            else
                Try(i + 1);
            s.pop_back();
            used[j] = false;
        }
    }
}
int main()
{
    cin >> c;
    s = "";
    Try('A');
    system("pause");
}