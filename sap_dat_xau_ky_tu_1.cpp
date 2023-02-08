#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[26] = {0};
        for (char &x : s)
        {
            a[x - 'a']++;
        }
        int maxx = *max_element(a, a + 26);
        if (maxx - 1 <= s.length() - maxx)
            cout << 1;
        else
            cout << -1;
        cout << maxx;
        cout << endl;
    }
    system("pause");
}