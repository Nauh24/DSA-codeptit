#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set<int> hop, giao;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                hop.insert(a[i]);
                i++;
            }
            else if (a[i] > b[j])
            {
                hop.insert(b[j]);
                j++;
            }
            else
            {
                hop.insert(a[i]);
                giao.insert(a[i]);
                i++;
                j++;
            }
        }

        while (i < n)
        {

            hop.insert(a[i]);
            i++;
        }
        while (j < m)
        {
            hop.insert(b[j]);
            j++;
        }

        for (auto it : hop)
            cout << it << " ";
        cout << endl;
        for (auto it : giao)
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}