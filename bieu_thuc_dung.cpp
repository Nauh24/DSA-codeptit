#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty())
                    st.pop();
                else
                {
                    int j = i;
                    while (s[j] == ']')
                        j++;
                    swap(s[i], s[j]);
                    cnt += j - i;
                    st.push(s[i]);
                }
            }
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}