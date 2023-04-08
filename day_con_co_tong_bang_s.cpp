#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int d[s] = {0};
        d[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (j >= a[i] && d[j - a[i]] == 1)
                    d[j] = 1;
            }
        }
        if (d[s] == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    system("pause");
}