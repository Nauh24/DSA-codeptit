#include <bits/stdc++.h>
using namespace std;
int n;
int a[11];
int cot[101], d1[101], d2[101];
int cnt;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0)
        {
            a[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if (i == n)
                cnt++;
            else
                Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt;
        cout << endl;
    }
    system("pause");
}