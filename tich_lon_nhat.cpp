#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int a[n];
    ll ans = 1;
    vector<ll> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    v.push_back(a[0] * a[1]);
    v.push_back(a[0] * a[1] * a[n - 1]);
    v.push_back(a[n - 3] * a[n - 2] * a[n - 1]);
    v.push_back(a[n - 2] * a[n - 1]);
    ll max = *max_element(v.begin(), v.end());
    cout << max;
    system("pause");
}