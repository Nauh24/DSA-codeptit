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
        queue<string> q;
        q.push("6");
        q.push("8");
        vector<string> v;
        while (1)
        {
            string x = q.front();
            if (x.size() <= n)
                v.push_back(x);
            else
                break;
            q.pop();
            q.push(x + "6");
            q.push(x + "8");
        }
        cout << v.size() << endl;
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}