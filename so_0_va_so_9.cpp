#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
queue<ll> q;
void init()
{
    q.push(9);
    // v.push_back(9);
    while (v.size() < 1000)
    {
        ll x = q.front();
        v.push_back(x);
        q.pop();
        q.push(x * 10 + 0);
        q.push(x * 10 + 9);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    init();
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % n == 0)
            {
                cout << v[i] << endl;
                break;
            }
        }
        cout << endl;
    }
    system("pause");
}