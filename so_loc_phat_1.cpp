#include <bits/stdc++.h>
using namespace std;
#define ll long long

void locphat(int n)
{
    //   stack<string> st;
}
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
        stack<string> st;
        queue<string> q;
        q.push("6");
        q.push("8");
        while (1)
        {
            string x = q.front();
            if (x.size() > n)
                break;
            else
                st.push(x);
            q.pop();
            q.push(x + "6");
            q.push(x + "8");
        }
        //    locphat(n);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    system("pause");
}