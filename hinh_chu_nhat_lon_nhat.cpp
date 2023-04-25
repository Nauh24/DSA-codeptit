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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stack<int> st;
        int i = 0;
        ll res = INT_MIN;
        int idx;
        while (i < n)
        {
            if (st.empty() || a[i] >= a[st.top()])
            {
                st.push(i);
                i++;
            }
            else
            {
                idx = st.top();
                st.pop();
                if (st.empty())
                    res = max(res, i * a[idx]);
                else
                    res = max(res, a[idx] * (i - st.top() - 1));
            }
        }
        while (!st.empty())
        {
            idx = st.top();
            st.pop();
            if (st.empty())
                res = max(res, i * a[idx]);
            else
                res = max(res, a[idx] * (i - st.top() - 1));
        }
        cout << res;
        cout << endl;
    }
    system("pause");
}