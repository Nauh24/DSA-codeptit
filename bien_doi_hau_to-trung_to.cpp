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
        stack<string> st;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push("(" + b + string(1, s[i]) + a + ")");
            }
            else
                st.push(string(1, s[i]));
        }
        cout << st.top();
        cout << endl;
    }
    system("pause");
}