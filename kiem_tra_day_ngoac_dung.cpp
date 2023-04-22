#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && s[i] == ')' && st.top() == '(')
                st.pop();
            else if (!st.empty() && s[i] == ']' && st.top() == '[')
                st.pop();
            else if (!st.empty() && s[i] == '}' && st.top() == '{')
                st.pop();
            else
                st.push(s[i]);
        }
        if (st.empty())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    system("pause");
}