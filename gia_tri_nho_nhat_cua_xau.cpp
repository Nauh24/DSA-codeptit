#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        priority_queue<int> pq;
        for (auto it : mp)
        {
            pq.push(it.second);
        }
        while (k > 0)
        {
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        ll sum = 0;
        while (!pq.empty())
        {
            ll y = pq.top();
            pq.pop();
            sum += (y * y);
        }
        cout << sum;
        cout << endl;
    }
    system("pause");
}