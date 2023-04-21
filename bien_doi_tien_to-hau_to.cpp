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
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                st.push(string(1, s[i]));
            else
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push(a + b + s[i]);
            }
        }
        cout << st.top();
        cout << endl;
    }
    system("pause");
}