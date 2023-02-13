#include <bits/stdc++.h>
using namespace std;
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
        {
            cin >> a[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int k = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[k] > a[j])
                    k = j;
            }
            if (i != k)
            {
                cnt++;
                swap(a[i], a[k]);
            }
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}