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
        int v, e;
        cin >> v >> e;
        vector<vector<int>> vi(v + 1);
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vi[x].push_back(y);
            vi[y].push_back(x);
        }
        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (int j : vi[i])
                cout << j << " ";
            cout << endl;
        }
        cout << endl;
    }
    system("pause");
}