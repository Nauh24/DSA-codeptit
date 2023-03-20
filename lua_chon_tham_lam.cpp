#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    cin >> sum;
    int ok = 0;
    if (sum > (n * 9) || sum == 0)
    {
        cout << "-1 -1 ";
        ok = 1;
    }
    int sum2 = sum;
    string s = string(n, '0');
    for (int i = n - 1; i >= 0; i--)
    {
        if (sum > 9)
        {
            s[i] = '9';
            sum -= 9;
        }
        else
        {
            if (i == 0)
                s[i] = char(sum + '0');
            else
            {
                s[0] = '1';
                s[i] = char(sum - 1 + '0');
            }
            break;
        }
    }
    string res = string(n, '0');
    for (int i = 0; i < n; i++)
    {
        if (sum2 > 9)
        {
            res[i] = '9';
            sum2 -= 9;
        }
        else
        {
            res[i] = char(sum2 + '0');
            break;
        }
    }

    if (ok == 0)
        cout << s << " " << res << endl;
    system("pause");
}