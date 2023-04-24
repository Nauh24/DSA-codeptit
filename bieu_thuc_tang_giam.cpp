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
        for (int i = 0; i <= s.size(); i++)
        {
            st.push(i + 1);
            if (i == s.size() || s[i] == 'I')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        cout << endl;
    }
    system("pause");
}