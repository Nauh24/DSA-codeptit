#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string a, b;
        cin >> k >> a >> b;
        while (a.size() < b.size())
            a = "0" + a;
        while (b.size() < a.size())
            b = "0" + b;
        int nho = 0;
        string res = "";
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int c = (a[i] - '0') + (b[i] - '0') + nho;
            res = to_string(c % k) + res;
            nho = c / k;
        }
        if (nho > 0)
            res = to_string(nho) + res;
        cout << res;
        cout << endl;
    }

    system("pause");
}