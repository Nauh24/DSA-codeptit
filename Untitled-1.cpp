
#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main()
{
    faster();
    int t = 1, n, tmp;
    cin >> t;
    while(t--)
    {
        ll sum = 0;
        cin >> n;
        priority_queue<int, vi, greater<int>> pq;
        while(n--)
        {
            cin >> tmp;
            pq.push(tmp);
        }
        while(pq.sz > 1)
        {
            tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            sum += tmp;
            pq.push(tmp);
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}