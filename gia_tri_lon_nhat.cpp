#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    ll f = 0, g = 0;
    ll maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f += abs(a[i]) + a[i];
        maxx = max(maxx, f);
    }
    cout << maxx << endl;
    system("pause");
}