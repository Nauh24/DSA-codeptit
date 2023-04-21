#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    string s;
    vector<int> v;
    int n;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            v.push_back(n);
        }
        else if (s == "show")
        {
            if (v.size() == 0)
                cout << "empty";
            for (auto it : v)
                cout << it << " ";
            cout << endl;
        }
        else
            v.pop_back();
    }
}
