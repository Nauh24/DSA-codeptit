#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        int check = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int ok;
            if (s[i] != ')')
            {
                st.push(s[i]);
            }
            else
            {
                ok = 0;
                while (!st.empty())
                {
                    char c = st.top();
                    st.pop();
                    if (c == '+' || c == '-' || c == '*' || c == '/')
                        ok = 1;
                    if (c == '(')
                        break;
                }
                if (ok == 0)
                    check = 1;
            }
        }
        if (check == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    system("pause");
}
/*
3
((a+b))
(a + (b)/c)
(a + b*(c-d))
*/