#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[21];
int sum;
int ok;
vector<int> v;
void Try(int limit, int sum)
{
    if (sum == k)
    {
        ok = 1;
        cout << "[";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i != v.size() - 1)
                cout << " ";
        }
        cout << "]";
        return;
    }
    else if (sum < k)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= limit)
            {
                limit = a[i];
                v.push_back(a[i]);
                Try(limit, sum + a[i]);
                v.pop_back();
            }
        }
    }
    else
        return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ok = 0;
        sort(a, a + n);
        v.clear();
        Try(1, 0);
        if (ok == 0)
            cout << -1;
        cout << endl;
    }
    system("pause");
}