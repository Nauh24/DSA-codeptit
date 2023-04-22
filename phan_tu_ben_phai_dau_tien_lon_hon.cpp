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
        {
            cin >> a[i];
        }
        stack<ll> st;
        ll v[n];
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= a[i])
            {
                st.pop();
            }
            if (st.empty())
                v[i] = -1;
            else
                v[i] = st.top();
            st.push(a[i]);
        }
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}