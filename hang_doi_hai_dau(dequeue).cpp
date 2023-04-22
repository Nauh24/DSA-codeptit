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
    deque<int> dq;
    string s;
    int x;
    while (t--)
    {
        cin >> s;
        if (s == "PUSHBACK")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PUSHFRONT")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (!dq.empty())
                cout << dq.front();
            else
                cout << "NONE";
        }
        else if (s == "PRINTBACK")
        {
            if (!dq.empty())
                cout << dq.back();
            else
                cout << "NONE";
        }
        else if (s == "POPFRONT")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else
        {
            if (!dq.empty())
                dq.pop_back();
        }
        cout << endl;
    }
    system("pause");
}