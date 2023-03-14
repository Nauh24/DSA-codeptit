#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> a;
int cnt, minn;
void Try(int n, int cnt)
{
    // minn = min(minn, cnt);

    if (n == 1 || cnt >= minn)
    {
        minn = min(minn, cnt);
        //  cout << cnt << endl;
        return;
    }

    if (n % 3 == 0)
    {
        Try(n / 3, cnt + 1);
    }
    if (n % 2 == 0)
        Try(n / 2, cnt + 1);
    Try(n - 1, cnt + 1);
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
        minn = INT_MAX;
        cin >> n;
        Try(n, 0);
        cout << minn;
        cout << endl;
    }
    system("pause");
}