#include <bits/stdc++.h>
using namespace std;
string s;
int ok;
void next(string &s)
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
    {
        i--;
    }
    if (i < 0)
        ok = 1;
    else
    {
        int j = s.size() - 1;
        while (s[i] >= s[j])
            j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cin >> s;
        ok = 0;
        cout << k << " ";
        next(s);
        if (ok == 1)
            cout << "BIGGEST";
        else
            cout << s;
        cout << endl;
    }
    system("pause");
}