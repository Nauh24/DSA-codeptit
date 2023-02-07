#include <bits/stdc++.h>
using namespace std;
int a[11];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int cnt = n - 1;
        cout << "[";
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
            if (i != n)
                cout << " ";
        }
        cout << "]";
        cout << endl;
        while (cnt >= 1)
        {
            cout << "[";
            for (int i = 1; i <= cnt; i++)
            {
                a[i] = a[i] + a[i + 1];
                cout << a[i];
                if (i != cnt)
                    cout << " ";
            }
            cout << "]";
            cnt--;
            cout << endl;
        }
        cout << endl;
    }
    system("pause");
}