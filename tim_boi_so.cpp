#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        queue<string> q;
        q.push("9");

        while (1)
        {
            string tmp = q.front();
            q.push(tmp + "0");
            q.push(tmp + "9");

            // cout << tmp << endl;
            ll res = stoll(tmp);
            q.pop();
            if (res % n == 0)
            {
                cout << tmp << endl;
                break;
            }
        }

        cout << endl;
    }
    system("pause");
}