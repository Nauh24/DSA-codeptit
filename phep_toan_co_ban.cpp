#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ok;
string s;
string res = "+-";
// int sign[2] = {'+', '-'};
int noprint;
bool check(string s)
{
    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(5, 2));
    int c = stoi(s.substr(10, 2));
    if (a < 10 || b < 10 || c < 10)
        return false;
    if (s[3] == '+')
        return a + b == c;
    else
        return a - b == c;
}
void Try(int i)
{
    if (ok == 1)
        return;
    if (i == s.size())
    {
        if (check(s) && noprint == 0)
        {
            ok = 1;
            cout << s << endl;
        }
        return;
    }
    if (s[i] == '?')
    {
        if (i == 3)
        {
            for (int j = 0; j <= 1; j++)
            {
                // s[i] = sign[j];
                s[i] = res[j];
                Try(i + 1);
            }
        }
        else
        {
            for (int j = 0; j <= 9; j++)
            {
                s[i] = j + '0';
                Try(i + 1);
            }
        }
        s[i] = '?';
    }
    else
        Try(i + 1);
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        ok = 0;
        noprint = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*' || s[i] == '/')
            {
                cout << "WRONG PROBLEM!" << endl;
                noprint = 1;
                break;
            }
        }
        Try(0);
        if (ok == 0 && noprint == 0)
            cout << "WRONG PROBLEM!";
        cout << endl;
    }
    system("pause");
}
/*
2
?0 ? 12 = 28
40 / ?3 = ??
*/