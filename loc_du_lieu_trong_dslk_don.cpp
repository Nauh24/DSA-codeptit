#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // set<int> se;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
            cout << a[i] << " ";
        mp[a[i]] = 1;
    }
    cout << endl;
    system("pause");
}