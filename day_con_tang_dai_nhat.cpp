#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        d[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                d[i] = max(d[i], d[j] + 1);
        }
    }
    cout << *max_element(d, d + n) << endl;
    system("pause");
}