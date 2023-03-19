#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans=min(k,n-k);
        ll sum1 = 0, sum2 = 0;
        for(int i=0;i<ans;i++) sum1+=a[i];
        for(int i=ans;i<n;i++) sum2+=a[i];
        cout << abs(sum1 - sum2);
        cout << endl;
    }
    system("pause");
}
