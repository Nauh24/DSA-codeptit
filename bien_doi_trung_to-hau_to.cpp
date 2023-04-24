#include <bits/stdc++.h>
using namespace std;
int pri(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
            {
                while (!st.empty() && pri(st.top()) >= pri(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else
                res += s[i];
        }
        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }
        cout << res;
        cout << endl;
    }

    system("pause");
}
/*
A*(B+C)^D-E/F

*/