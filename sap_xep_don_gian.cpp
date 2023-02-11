#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100001];
int f[100001];
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        f[a[i]] = f[a[i] - 1] + 1;
        res = max(res, f[a[i]]); // tìm dãy con tăng dài nhất
    }
    cout << n - res; // so buoc
    system("pause");
}