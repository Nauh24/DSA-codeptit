#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> v;
queue<string> q;
void init()
{
    q.push("1");
    v.push_back("1");
    while (v.size() < 10000)
    {
        string top = q.front();
        q.pop();
        v.push_back(top + "0");
        v.push_back(top + "1");
        q.push(top + "0");
        q.push(top + "1");
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
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    system("pause");
}