#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
int a[1001];
void Sinh()
{
    int i = k;
    while (i >= 1 && a[i] == a[i - 1] + 1)
    {
        i--;
    }
    a[i]--;
    for (int j = i + 1; j <= k; j++)
        a[j] = n - k + j;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        Sinh();
        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
        cout << endl;
        memset(a, 0, sizeof(a));
    }
    system("pause");
}