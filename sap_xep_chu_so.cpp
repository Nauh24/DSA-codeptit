#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<int> se;
void tach(ll n)
{
    while (n)
    {
        int x = n % 10;
        se.insert(x);
        n /= 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        int a[10] = {0};
        for (char i : s)
        {
            if (isdigit(i))
                a[i - '0'] = 1;
        }
        for (int i = 0; i < 10; i++)
        {
            if (a[i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
    system("pause");
}