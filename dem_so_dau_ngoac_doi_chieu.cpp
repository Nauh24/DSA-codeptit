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
        int close = 0, open = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            if (st.top() == '(')
                open++;
            else
                close++;
            st.pop();
        }
        int ans = open / 2 + close / 2;
        ans += (open % 2 + close % 2);
        cout << ans;
        cout << endl;
    }
    system("pause");
}