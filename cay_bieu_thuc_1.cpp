#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                string x = st.top();
                st.pop();
                string y = st.top();
                st.pop();
                if (s[i] == '+')
                    st.push(x + "+" + y);
                if (s[i] == '-')
                    st.push(x + "-" + y);
                if (s[i] == '*')
                    st.push(x + "*" + y);
                if (s[i] == '/')
                    st.push(x + "/" + y);
            }
            else
                st.push(string(1, s[i]));
        }
        string res = st.top();
        reverse(res.begin(), res.end());
        cout << res;
        cout << endl;
    }
    system("pause");
}