#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    multiset<int> se;
    for (int i = 0; i < n; i++)
    {
        se.insert(a[i]);
        cout << "Buoc " << i << ":"
             << " ";
        for (auto it : se)
            cout << it << " ";
        cout << endl;
    }
    system("pause");
}