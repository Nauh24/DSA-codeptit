#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1][n + 1] = {0};
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            int z = stoi(tmp);
            a[i][z] = 1;
            a[z][i] = 1;
            a[i][z] = 1;
            a[z][i] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i][j] == 1)
                cout << i << " " << j << endl;
        }
    }
    system("pause");
}
/*
3
2 3
1 3
1 2
*/