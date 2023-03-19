#include <bits/stdc++.h>
using namespace std;
#define ll long long
char x;
int k;
char a[256];
void Try(int i, char bd)
{
    for (char j = bd; j <= x; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int y = 1; y <= k; y++)
            {
                cout << a[y];
            }
            cout << endl;
        }
        else
            Try(i + 1, j);
    }
}
int main()
{
    cin >> x;
    cin >> k;
    Try(1, 'A');
}
