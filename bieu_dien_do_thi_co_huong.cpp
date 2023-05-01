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
        int v, n;
        cin >> v >> n;
        vector<vector<int>> vi(v + 1);
        int x, y;
        for (int i = 1; i <= n; i++)
        {
            cin >> x >> y;
            vi[x].push_back(y);
        }
        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (auto it : vi[i])
                cout << it << " ";
            cout << endl;
        }
        cout << endl;
    }
    system("pause");
}