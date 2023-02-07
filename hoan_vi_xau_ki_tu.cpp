#include <bits/stdc++.h>
using namespace std;
string s;
vector<char> v;
int a[11];
bool used[11] = {false};
void in()
{
    for (int i = 1; i <= s.length(); i++)
    {
        cout << v[a[i] - 1];
    }
    cout << " ";
}
void Try(int i)
{
    for (int j = 1; j <= s.length(); j++)
    {
        if (!used[j])
        {
            used[j] = true;
            a[i] = j;
            if (i == s.length())
                in();
            else
                Try(i + 1);
            used[j] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            v.push_back(s[i]);
        }
        Try(1);
        v.clear();
        cout << endl;
    }
    system("pause");
}