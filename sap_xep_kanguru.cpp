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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        int cnt = n;
        int x = 0, y = n / 2;
        while (x < n / 2 && y < n)
        {
            if (a[x] >= 2 * a[y])
            {
                cnt--;
                x++;
                y++;
            }
            else
                y++;
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}