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
        queue<int> q;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 1)
                cout << q.size() << endl;
            else if (x == 2)
            {
                if (q.empty())
                    cout << "YES";
                else
                    cout << "NO";
                cout << endl;
            }
            else if (x == 3)
            {
                int m;
                cin >> m;
                q.push(m);
            }
            else if (x == 4)
            {
                if (!q.empty())
                    q.pop();
            }
            else if (x == 5)
            {
                if (q.empty())
                    cout << -1;
                else
                    cout << q.front();
                cout << endl;
            }
            else
            {
                if (q.empty())
                    cout << -1;
                else
                    cout << q.back();
                cout << endl;
            }
        }
        cout << endl;
    }
    system("pause");
}