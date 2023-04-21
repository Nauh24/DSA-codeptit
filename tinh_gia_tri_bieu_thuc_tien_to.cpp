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
        stack<int> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] >= '0' && s[i] <= '9')
                st.push(s[i] - '0');
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if (s[i] == '+')
                    st.push(a + b);
                if (s[i] == '-')
                    st.push(a - b);
                if (s[i] == '*')
                    st.push(a * b);
                if (s[i] == '/')
                    st.push(a / b);
            }
        }
        cout << st.top();
        cout << endl;
    }
    system("pause");
}