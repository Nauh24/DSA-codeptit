#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool check = true;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (b[i] != a[i] && b[i] != a[n - 1 - i])
            {
                cout << "No";
                check = false;
                break;
            }
        }
        if (check)

            cout << "Yes";
        cout << endl;
    }
    system("pause");
}