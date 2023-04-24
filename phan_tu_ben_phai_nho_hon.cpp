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
        int n;
        cin >> n;
        int a[n + 1];

        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int vt[n + 1];
        stack<int> st;
        stack<int> st2;
        for (int i = n; i >= 1; i--)
        {
            while (!st.empty() && a[st.top()] <= a[i])
            {
                st.pop();
            }
            if (st.empty())
                vt[i] = -1;
            else
                vt[i] = st.top();
            st.push(i);
        }
        int b[n + 1];
        for (int i = n; i >= 1; i--)
        {
            while (!st2.empty() && st2.top() >= a[i])
                st2.pop();
            if (st2.empty())
                b[i] = -1;
            else
                b[i] = st2.top();
            st2.push(a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (vt[i] == -1)
                cout << -1 << " ";
            else
                cout << b[vt[i]] << " ";
        }
        cout << endl;
    }
    system("pause");
}