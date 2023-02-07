#include <bits/stdc++.h>
using namespace std;
int n;
char a, b, c;
void Tower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
        // return;
    }
    else
    {
        Tower(n - 1, a, c, b);
        cout << a << " -> " << c << endl;
        Tower(n - 1, b, a, c);
    }
}
int main()
{
    cin >> n;
    Tower(n, 'A', 'B', 'C');
    system("pause");
}