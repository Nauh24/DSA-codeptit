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
            ans += top1 + top2;
            pq.push(top1 + top2);
        }
        cout << ans;
        cout << endl;
    }
    system("pause");
}