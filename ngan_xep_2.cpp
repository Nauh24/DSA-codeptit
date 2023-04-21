#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin >> q;
    string s;
    int n;
    stack<int> st;
    while (q--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "POP")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            if (!st.empty())
                cout << st.top() << endl;
            else
                cout << "NONE" << endl;
        }
    }
}
