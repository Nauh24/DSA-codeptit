#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    int a[n + 1][n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            int x = stoi(tmp);
            a[i][x] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    system("pause");
}