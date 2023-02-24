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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll C = a[i] * a[i] + a[j] * a[j];
                ll c = sqrt(C);
                if (c * c == C && binary_search(a.begin() + j + 1, a.end(), c))
                {
                    cout << "YES";
                    ok = 1;
                    break;
                }
            }
        }
        if (ok == 0)
            cout << "NO";
        cout << endl;
    }
    system("pause");
}