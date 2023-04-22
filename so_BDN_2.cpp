#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bdn(ll n)
{
    queue<ll> q;
    q.push(1);
    while (1)
    {
        ll x = q.front();
        if (x % n == 0)
            return x;
        q.pop();
        q.push(x * 10 + 0);
        q.push(x * 10 + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << bdn(n);
        cout << endl;
    }
    system("pause");
}