#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> v;
ll init(ll n)
{
    ll cnt = 0;
    queue<ll> q;
    q.push(1);
    //  v.push_back(1);
    while (1)
    {
        ll x = q.front();
        if (x <= n)
        {
            cnt++;
        }
        else
            break;
        q.pop();
        //  v.push_back(x);
        q.push(x * 10 + 0);
        q.push(x * 10 + 1);
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    //   init();
    while (t--)
    {
        ll n;
        cin >> n;
        cout << init(n);
        cout << endl;
    }
    system("pause");
}