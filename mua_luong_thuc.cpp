#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        int lt = s * m;   // so luong luong thuc can co trong s ngay de ton tai
        int day = lt / n; // so ngay toi thieu mua luong thuc de ton tai
        if (lt % n != 0)
            day++;
        if (day <= (s - s / 7))
            cout << day << endl; // s-s/7 loai chu nhat ra
        else
            cout << -1 << endl;
        cout << endl;
    }
}