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
    string s;
    queue<ll> q;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            ll x;
            cin >> x;
            q.push(x);
        }
        else if (s == "POP")
        {
            if (!q.empty())
                q.pop();
        }

        else
        {
            if (q.empty())
                cout << "NONE";
            else
                cout << q.front();
        }
        cout << endl;
    }
    system("pause");
}