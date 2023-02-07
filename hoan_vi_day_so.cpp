#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000], b[100000];
vector<int> v;
bool used[100000] = {false};
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << v[a[i] - 1] << " ";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            used[j] = true;
            a[i] = j;
            if (i == n)
                in();
            else
                Try(i + 1);
            used[j] = false;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    Try(1);
    system("pause");
}