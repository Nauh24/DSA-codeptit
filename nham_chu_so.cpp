#include <bits/stdc++.h>
using namespace std;
string a, b;
int min(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '6')
            s[i] = '5';
        sum = sum * 10 + int(s[i] - '0');
    }
    return sum;
}
int max(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '5')
            s[i] = '6';
        sum = sum * 10 + int(s[i] - '0');
    }
    return sum;
}
int main()
{
    cin >> a >> b;
    cout << min(a) + min(b) << " " << max(a) + max(b);
    system("pause");
}