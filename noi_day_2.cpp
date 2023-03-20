#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        ll ans = 0;
        while (pq.size() > 1)
        {
            ll top1 = pq.top();
            pq.pop();
            ll top2 = pq.top();
            pq.pop();
            ll top3 = top1 + top2;
            top3 %= mod;
            ans = (ans + top3) % mod;
            pq.push(top3);
        }
        cout << ans;
        cout << endl;
    }
    system("pause");
}